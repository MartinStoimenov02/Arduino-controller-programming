byte ledState = 0;
void setup() 
{
  DDRD = B11111111;
}
void loop() 
{
for(int i=3; i<4; i++)
for(int j=6; j<7; j++)
{

    bitSet(ledState, i);
    bitSet(ledState, j);
    adjustLedState();
    delay(500); 
}
for(int i=3; i<4; i++)
for(int j=6; j<7; j++)
{

    bitClear(ledState, i);
    bitClear(ledState, j);
    adjustLedState();
    delay(500); 
}

}
void adjustLedState() 
{
  PORTD  = ledState;
}
