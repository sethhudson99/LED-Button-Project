// **03_debounce_polling**

#include <Arduino.h>

// put function declarations here
const int buttonPin = 2;
const int ledPin = 12;
bool ledOn = false;
bool buttonState = HIGH;
bool lastRawState = HIGH;
const long debounceDelay = 50;
long lastDebounce;


void setup()
{
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
  // put your main code here, to run repeatedly
  bool rawState = digitalRead(buttonPin);
  if (rawState != lastRawState){
      lastDebounce = millis();
  }

  if ((millis() - lastDebounce) > debounceDelay){
    if(rawState != buttonState){
      buttonState = rawState;

      if(buttonState == LOW){
        ledOn = !ledOn;
      }
    }
    
  }

  lastRawState = rawState;
  
  if (ledOn == true){
    digitalWrite(ledPin,HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  
  
}