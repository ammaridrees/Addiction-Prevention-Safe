/*The code here utilizes four buttons to enter a 4 digit pin that will be displayed on an LCD
 * screen. To set a password, it must be hardcoded into this program (currently 1 2 3 4). Note
 * that the wiring is a bit fragile and can easily make the LCD unreadable, if that is the case,
 * resetting the arduino should remedy the issue.
 */
//Using LCD library
#include <LiquidCrystal.h>

//Buttons will be used to enter 4 digit code
int buttons[] = {8, 9, 10, 11};
//They will be all 0s by default
int code[] = {0, 0, 0, 0};
//Correct code is here
int correctCode[] = {1, 2, 3, 4};
//Set up LCD and create flag that will determince if correct code is entered
LiquidCrystal lcd(13, 12, 5, 4, 3, 2);
bool correct = false;
bool isLocked = false;
int timer = 30;

void setup() {
  //All buttons will be input
  for (int i = 0; i < 4; ++i) {
    pinMode(buttons[i], INPUT);
  }

  //Set up LCD, and prompt user to enter password
  lcd.begin(16, 2);
  lcd.print("Hello.");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Enter Password");
  delay(2000);

  Serial.begin(9600);
}

void enterPassword() {
  while (true) {
    //Clear screen, and have an array to keep track of button states
    lcd.clear();
    int buttonStates[4];
  
    lcd.setCursor(0,0);
  
    /*Print each digit on the screen, everytime a button is pressed, increment by 1. In the
     * case that the digit gets to 9, pressing again will reset it to 0
     */
    for (int i = 0; i < 4; ++i) {
      Serial.print(code[i]);
      lcd.print(code[i]);
      buttonStates[i] = digitalRead(buttons[i]);
      if (buttonStates[i] == HIGH) {
        code[i] += 1;
        if (code[i] > 9) {
          code[i] = 0;
        }
      }
    }
  
    //Continuosly check if code is correct, set bool flag accordingly
    for (int i = 0; i < 4; ++i) {
      if (code[i] != correctCode[i]) {
        correct = false;
        break;
      }
      correct = true;
    }
  
    /*If the bool flag states true, then display to user that the password is correct, and
     * communicate to another arduino to lock/unlock. After that, reset code to all 0s
     */
    if (correct) {
      Serial.println("Password Correct");
      lcd.clear();
      lcd.print("Password Correct");
      Serial.write('A');
      delay(1000);
      for (int i = 0; i < 4; ++i) {
        code[i] = 0;
      }
      break;
    }
    delay(250);
  }
}

void loop() {
  //If the safe is not locked, then enter password to lock
  if (!isLocked) {
    enterPassword();
    isLocked = true;
  }
  //Otherwise, wait until timer ends, then enter password unlock
  else {
    while (timer > 0) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Please wait.. ");
      timer--;
      delay(1000);
    }
    isLocked = false;
    timer = 30;
    enterPassword();
  }
  
  delay(250);
}
