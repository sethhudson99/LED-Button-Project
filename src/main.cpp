// **02_toggle_polling**

#include <Arduino.h>

// put function declarations here
const int buttonPin = 2;
const int ledPin = 12;
boolean ledOn = false;

void setup()
{
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
  // put your main code here, to run repeatedly
  if (ledOn == false && digitalRead(buttonPin) == LOW)
  {
    ledOn = true;
  } else if( ledOn == true && digitalRead(buttonPin) == LOW){
    ledOn = false;
  }

  if (ledOn == true){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }


}