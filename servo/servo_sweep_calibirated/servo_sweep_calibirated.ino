#include <Servo.h>

Servo george;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int ledPin = 13;
int mini = 15; // servo's minimum position
int maxi = 160; // servo's maximum position

void setup() {
    george.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
    for (pos = mini; pos <= maxi; pos += 1) { // goes from 0 degrees to 180 degrees
        // in steps of 1 degree
        george.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
    }
    for (pos = maxi; pos >= mini; pos -= 1) { // goes from 180 degrees to 0 degrees
        george.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
    }
    digitalWrite(ledPin, !digitalRead(ledPin));
}