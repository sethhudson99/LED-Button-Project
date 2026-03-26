// **01_basic_polling**

#include <Arduino.h>

// put function declarations here
const int buttonPin = 2;
const int ledPin = 12;

void setup()
{
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
  // put your main code here, to run repeatedly
  if (digitalRead(buttonPin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}