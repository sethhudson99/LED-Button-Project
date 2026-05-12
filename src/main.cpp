// **02_toggle_polling**

#include <Arduino.h>

// put function declarations here
const int buttonPin = 2;
const int ledPin = 12;
bool ledOn = false;
bool lastButtonState = HIGH;

void setup()
{
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
  // put your main code here, to run repeatedly
  bool currentButtonState = digitalRead(buttonPin);
  if (lastButtonState == HIGH && currentButtonState == LOW){
      ledOn = !ledOn;
  }
      lastButtonState = currentButtonState;
    
  if (ledOn == true){
    digitalWrite(ledPin,HIGH);
  } else {
    digitalWrite(ledPin,LOW);
  }

 


}