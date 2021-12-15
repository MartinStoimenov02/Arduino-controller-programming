#include "SevSeg.h"
SevSeg sevseg;

const int buttonPin = 10;     
int buttonState = 0;   
int a=0; 

void setup(){
    byte numDigits = 1;
    byte digitPins[] = {};
    byte segmentPins[] = {6, 5, 2, 3, 4, 7, 8, 9};
    bool resistorsOnSegments = true;

    byte hardwareConfig = COMMON_CATHODE; 
    sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(90);
}

void loop(){
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    a=random(10); 
  }
    sevseg.setNumber(a);
        sevseg.refreshDisplay();  
        delay(100);     
}