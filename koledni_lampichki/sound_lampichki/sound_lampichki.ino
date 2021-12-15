#include "pitches.h"
byte ledState = 0;
// notes in the melody:
int melody[] = {
NOTE_C4, NOTE_F4,  NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4,  NOTE_C4,  NOTE_C4, NOTE_A4,  NOTE_A4,  NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_G4, NOTE_E4, NOTE_F4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2
};

void setup() 
{
  DDRD = B11111111;
}
void loop() 
{
  for (int thisNote = 0; thisNote < 30; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);


      for(int i=2; i<3; i++)//zhulto gasi 
    {
    bitClear(ledState, i);
    adjustLedState();
    delay(0);
    }
  for (int i = 3; i < 4; i++) //cherveno
  for (int j = 4; j < 5; j++) //zeleno
  {
    bitSet(ledState, i);
    bitSet(ledState, j);
    adjustLedState();
    delay(100);
  }
        for(int i=4; i<5; i++)//zeleno gasi
    {
    bitClear(ledState, i);
    adjustLedState();
    delay(0);
    }
    for (int i = 3; i < 4; i++) //cherveno
  for (int j = 2; j < 3; j++) //zhulto
  {
    bitSet(ledState, i);
    bitSet(ledState, j);
    adjustLedState();
    delay(100);
  }
         for(int i=3; i<4; i++)//cherveno gasi
    {
    bitClear(ledState, i);
    adjustLedState();
    delay(0);
    }
        for (int i = 4; i < 5; i++) //zeleno
  for (int j = 2; j < 3; j++) //zhulto
  {
    bitSet(ledState, i);
    bitSet(ledState, j);
    adjustLedState();
    delay(100);
  }
    }
}
void adjustLedState() 
{
  PORTD  = ledState;
}
