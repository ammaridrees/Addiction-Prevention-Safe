//Two of the arduinos will be using this code. All it does is simply lock or unlock
//We will be using the Servo library
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int lock = 0; //variable to determine if locked or not
int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop() {
  //if arduino data was sent/arduino 2 can read arduino 1s data
  if (Serial.available() > 0) {
    //read what the serial.write data bytes are
    if (Serial.read()=='A') {
      if(lock==1){//locking
        myservo.write(50);
        lock=0;
      }
      else{//unlocking
        myservo.write(150);
        lock=1;
      }
    }
  }
}
