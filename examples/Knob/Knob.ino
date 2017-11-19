/*
Modified from the official arduino example see:
http://www.arduino.cc/en/Tutorial/Knob
native servo connections on pin 5 or 6 the potentiometer is suggested to be connected 
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = A2;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(5);  // attaches the servo on pin 5 to the servo object (6 is also available)
}

void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}
