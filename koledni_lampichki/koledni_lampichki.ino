byte ledState = 0;
void setup() 
{
  DDRD = B11111111;
}
void loop() 
{
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
    delay(150);
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
    delay(150);
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
    delay(150);
  }
    }
void adjustLedState() 
{
  PORTD  = ledState;
}
