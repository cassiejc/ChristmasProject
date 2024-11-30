#include <Arduino.h>

int ledPin0 = 0;
int ledPin1 = 1;
int ledPin2 = 2;
int ledPin3 = 3;          
int ledPin4 = 4;
int ledPin5 = 5;          
int ledPin6 = 6;          
int ledPin7 = 7;
int ledPin8 = 8;
int ledPin9 = 9;          
int ledPin10 = 10;         
int ledPin11 = 11;         
int ledPin12 = 12;
int ledPin13 = 13;
int ledPinA0 = A0;
int ledPinA1 = A1;          
int ledPinA2 = A2;         
int ledPinA3 = A3;         
int ledPinA4 = A4;
int ledPinA5 = A5;
int brightness1 = 0;      // minimum brightness
int brightness2 = 255;    // maximum brightness
int fadeAmount = 51;      // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare led pins to be outputs:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin11, OUTPUT);
  pinMode(ledPin12, OUTPUT);
  pinMode(ledPin13, OUTPUT);
  pinMode(ledPinA0, OUTPUT);
  pinMode(ledPinA1, OUTPUT);
  pinMode(ledPinA2, OUTPUT);
  pinMode(ledPinA3, OUTPUT);
  pinMode(ledPinA4, OUTPUT);
  pinMode(ledPinA5, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of LED's:
  analogWrite(ledPin0, brightness2);
  analogWrite(ledPin1, brightness1);
  analogWrite(ledPin2, brightness2);
  analogWrite(ledPin3, brightness1);
  analogWrite(ledPin4, brightness2);
  analogWrite(ledPin5, brightness1);
  analogWrite(ledPin6, brightness2);
  analogWrite(ledPin7, brightness1);
  analogWrite(ledPin8, brightness2);
  analogWrite(ledPin9, brightness1);
  analogWrite(ledPin10, brightness2);
  analogWrite(ledPin11, brightness1);
  analogWrite(ledPin12, brightness2);
  analogWrite(ledPin13, brightness1);
  analogWrite(ledPinA0, brightness2);
  analogWrite(ledPinA1, brightness1);
  analogWrite(ledPinA2, brightness2);
  analogWrite(ledPinA3, brightness1);
  analogWrite(ledPinA4, brightness2);
  analogWrite(ledPinA5, brightness1);

  // change the brightness for next time through the loop:
  brightness1 = brightness1 + fadeAmount;
  brightness2 = brightness2 - fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness1 == 0 || brightness1 == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);                            
}
