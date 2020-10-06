# Addiction-Prevention-Safe
The initial design was created for our CS 362 (Computer Design) class. Now it is a project we are trying to further improve.

Our project is to implement a safe-like device that is designed to keep the user away from wasting their time on certain tasks (e.g. phone usage, etc). The safe will use some security features such as the requirement of a password as well as a timer which will make the safe unable to open until the timer is complete.  For example, if a user wants to stay away from their phone for a specific time, they can place their phone into the container, and they will not have access to their phone until it allows you to re-enter a password.

For more information, look at the [Final Documentation](https://github.com/aidree3/Addiction-Prevention-Safe/blob/master/Milestones/Final%20Project%20Detailed%20Design%20Report%20.pdf) file for in depth documentation.

## Getting Started
These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites
What things you need to install the software and how to install them
```
Arduino Project Kit
```
[Costs about $30](https://www.amazon.com/Kuman-Project-Complete-Starter-breadboard/dp/B016D5KUHS/ref=sr_1_5?s=pc&ie=UTF8&qid=1471547757&sr=1-5)
- This project utilizes 4 Arduino boards, though it could be done with fewer.
```
Fingerprint Sensor
```
[Costs about $50](https://www.adafruit.com/product/751?gclid=EAIaIQobChMI9cK2xfX04wIVhZyzCh1-4gKkEAQYASABEgJuXPD_BwE)
- This project uses one sensor. There are cheaper alternatives that work as well.
```
Arduino - Software (IDE)
```
[Download Here](https://www.arduino.cc/en/main/software) 
- Instructions on how to install the IDE can be found [here](https://www.arduino.cc/en/Guide/HomePage)
```
Adafruit Fingerprint Sensor Library
```
[Download Here](https://github.com/adafruit/Adafruit-Fingerprint-Sensor-Library)
### Installing
How to get the environment ready:
```
1. On the repo, click the green "Clone or Download" button and select "Download ZIP". Save it.
```
![Alt text](https://github.com/aidree3/Addiction-Prevention-Safe/blob/master/Tutorial%20Screenshots/e11f5cb48bae683eca943d7f490c9b7a.gif)
```
2. Launch the Arduino IDE. Your screen will look something like below.
```
![Alt text](https://github.com/aidree3/Addiction-Prevention-Safe/blob/master/Tutorial%20Screenshots/Step%201.png)
```
3. Select "File", then "Open". Navigate to the folder that you saved the repository. 
(Side note: If you've downloaded the adafruit library, you should place it in this folder.)
```
![Alt text](https://github.com/aidree3/Addiction-Prevention-Safe/blob/master/Tutorial%20Screenshots/Step3.PNG)
```
4. Navigate through the folder and open the finger print file.
```
![Alt text](https://github.com/aidree3/Addiction-Prevention-Safe/blob/master/Tutorial%20Screenshots/Step4.gif)
```
5. Select "Sketch", next "Include Library", and then "Add .ZIP Library".
```
![Alt text](https://github.com/aidree3/Addiction-Prevention-Safe/blob/master/Tutorial%20Screenshots/Step5.gif)
```
6. Select the adafruit library .zip file. You won't get the error because I already have it added.
```
![Alt text](https://github.com/aidree3/Addiction-Prevention-Safe/blob/master/Tutorial%20Screenshots/Step6.gif)
```
7. Open the Password and Servo files as well.
```
```
8. Connect an Arduino board to your computer. Make sure you have the wiring complete before doing this.
```
[View here for wiring.](https://github.com/aidree3/Addiction-Prevention-Safe/blob/master/Milestones/Final%20Project%20Detailed%20Design%20Report%20.pdf)
```
9. Once connected, press the upload button (the one with the arrow pointing right).
```
![Alt text](https://github.com/aidree3/Addiction-Prevention-Safe/blob/master/Tutorial%20Screenshots/Step9.png)
```
10. Repeat steps 8 and 9 for each arduino. One for fingerprintLCD, one for Password, and two for servo.
```
## Deployment
To get your own safe running, it's really up to you how you want to design it. As long as the arduinos are working as expected, there's no exact way to build it.

We used a shoebox!

## Built With
[Arduino](https://www.arduino.cc/en/main/software) - The IDE used

## Authors
- Ammar Idrees - *Initial Design* - [ammaridrees](https://github.com/ammaridrees)
- Umer Qazi - *Wiring* - [umerqazi98](https://github.com/umerqazi98)
- Maaz Ahmed - *Documentation* - [mahmed029](https://github.com/mahmed029)
- Hasan Ali - *Coding* - [hasanb23](https://github.com/hasanb23)

## License
This project is licensed under the MIT License - see the [LICENSE.md](https://github.com/aidree3/Addiction-Prevention-Safe/blob/master/LICENSE.md) file for details

## Acknowledgments
Used code from the Adafruit library to utilize fingerprint sensor
