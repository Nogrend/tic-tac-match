#include <Arduino.h>
#include <LedControl.h>

LedControl ledMaxtrixA = LedControl(12,11,10,1);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}


/*
- create a joystick instance
- create a led matrix instance
- move one led with joystick up, down, right, left
- constant one direction, led move one unit per half second
*/