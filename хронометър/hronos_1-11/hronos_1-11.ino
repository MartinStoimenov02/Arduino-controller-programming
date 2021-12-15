byte ledState = 0;
void setup() 
{
  DDRD = B11111111;
}
void loop() 
{
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++)  
  {
    bitSet(ledState, i);
    bitSet(ledState, a);
    bitSet(ledState, b);
    bitSet(ledState, c);
    bitSet(ledState, d);
    adjustLedState();
    delay(1000);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++) 
  {
    bitClear(ledState, i);
        bitClear(ledState, d);
        bitClear(ledState, a);
        bitClear(ledState, c);
        bitClear(ledState, b);
    adjustLedState();
    delay(0);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++)  
      for (int d = 5; d < 6; d++) 
       for (int e = 6; e < 7; e++) 
  {
    bitSet(ledState, i);
    bitSet(ledState, a);
    bitSet(ledState, c);
    bitSet(ledState, d);
    bitSet(ledState, e);
    adjustLedState();
    delay(1000);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
      for (int d = 5; d < 6; d++) 
       for (int e = 6; e < 7; e++) 
  {
    bitClear(ledState, i);
        bitClear(ledState, d);
        bitClear(ledState, a);
        bitClear(ledState, c);
        bitClear(ledState, e);
    adjustLedState();
    delay(0);
  }
  for (int i =1 ; i < 2; i++) 
    for (int b = 4; b < 5; b++) 
  {
    bitSet(ledState, i);
    bitSet(ledState, b);
    adjustLedState();
    delay(1000);
  }
  for (int i =1 ; i < 2; i++) 
    for (int b = 4; b < 5; b++) 
  {
    bitClear(ledState, i);
        bitClear(ledState, b);
    adjustLedState();
    delay(0);
  }
  for (int i =1 ; i < 2; i++) 
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
       for (int e = 6; e < 7; e++) 
        for (int f = 7; f < 8; f++) 
  {
    bitSet(ledState, i);
    bitSet(ledState, b);
    bitSet(ledState, c);
    bitSet(ledState, e);
    bitSet(ledState, f);
    adjustLedState();
    delay(1000);
  }
  for (int i =1 ; i < 2; i++) 
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
       for (int e = 6; e < 7; e++) 
        for (int f = 7; f < 8; f++) 
  {
    bitClear(ledState, i);
        bitClear(ledState, c);
        bitClear(ledState, b);
        bitClear(ledState, e);
        bitClear(ledState, f);
    adjustLedState();
    delay(0);
  }
  for (int i =1 ; i < 2; i++) 
    for (int b = 4; b < 5; b++) 
  {
    bitSet(ledState, i);
    bitSet(ledState, b);
    adjustLedState();
    delay(1000);
  }
  for (int i =1 ; i < 2; i++) 
    for (int b = 4; b < 5; b++) 
  {
    bitClear(ledState, i);
        bitClear(ledState, b);
    adjustLedState();
    delay(0);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++)  
      for (int d = 5; d < 6; d++) 
       for (int e = 6; e < 7; e++) 
  {
    bitSet(ledState, i);
    bitSet(ledState, a);
    bitSet(ledState, c);
    bitSet(ledState, d);
    bitSet(ledState, e);
    adjustLedState();
    delay(1000);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
      for (int d = 5; d < 6; d++) 
       for (int e = 6; e < 7; e++) 
  {
    bitClear(ledState, i);
        bitClear(ledState, d);
        bitClear(ledState, a);
        bitClear(ledState, c);
        bitClear(ledState, e);
    adjustLedState();
    delay(0);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++)  
  {
    bitSet(ledState, i);
    bitSet(ledState, a);
    bitSet(ledState, b);
    bitSet(ledState, c);
    bitSet(ledState, d);
    adjustLedState();
    delay(1000);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++) 
  {
    bitClear(ledState, i);
        bitClear(ledState, d);
        bitClear(ledState, a);
        bitClear(ledState, c);
        bitClear(ledState, b);
    adjustLedState();
    delay(0);
  }
    for (int i =1 ; i < 2; i++) 
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
        for (int f = 7; f < 8; f++) 
  {
    bitSet(ledState, i);
    bitSet(ledState, b);
    bitSet(ledState, c);
    bitSet(ledState, f);
    adjustLedState();
    delay(1000);
  }
  for (int i =1 ; i < 2; i++) 
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
        for (int f = 7; f < 8; f++) 
  {
    bitClear(ledState, i);
        bitClear(ledState, c);
        bitClear(ledState, b);
        bitClear(ledState, f);
    adjustLedState();
    delay(0);
  }
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++) 
        for (int f = 7; f < 8; f++) 
  {
    bitSet(ledState, a);
    bitSet(ledState, b);
    bitSet(ledState, c);
    bitSet(ledState, d);
    bitSet(ledState, f);
    adjustLedState();
    delay(1000);
  }
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++) 
        for (int f = 7; f < 8; f++) 
  {
        bitClear(ledState, d);
        bitClear(ledState, a);
        bitClear(ledState, c);
        bitClear(ledState, b);
        bitClear(ledState, f);
    adjustLedState();
    delay(0);
  }
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++) 
       for (int e = 6; e < 7; e++) 
        for (int f = 7; f < 8; f++) 
  {
    bitSet(ledState, a);
    bitSet(ledState, b);
    bitSet(ledState, c);
    bitSet(ledState, d);
    bitSet(ledState, e);
    bitSet(ledState, f);
    adjustLedState();
    delay(1000);
  }
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++) 
       for (int e = 6; e < 7; e++) 
        for (int f = 7; f < 8; f++) 
  {
        bitClear(ledState, d);
        bitClear(ledState, a);
        bitClear(ledState, c);
        bitClear(ledState, b);
        bitClear(ledState, e);
        bitClear(ledState, f);
    adjustLedState();
    delay(0);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
    for (int b = 4; b < 5; b++) 
  {
    bitSet(ledState, i);
    bitSet(ledState, a);
    bitSet(ledState, b);
    adjustLedState();
    delay(1000);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)   
    for (int b = 4; b < 5; b++)
  {
    bitClear(ledState, i);
        bitClear(ledState, a);
        bitClear(ledState, b);
    adjustLedState();
    delay(0);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++) 
       for (int e = 6; e < 7; e++) 
        for (int f = 7; f < 8; f++) 
  {
    bitSet(ledState, i);
    bitSet(ledState, a);
    bitSet(ledState, b);
    bitSet(ledState, c);
    bitSet(ledState, d);
    bitSet(ledState, e);
    bitSet(ledState, f);
    adjustLedState();
    delay(1000);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++) 
       for (int e = 6; e < 7; e++) 
        for (int f = 7; f < 8; f++) 
  {
    bitClear(ledState, i);
        bitClear(ledState, d);
        bitClear(ledState, a);
        bitClear(ledState, c);
        bitClear(ledState, b);
        bitClear(ledState, e);
        bitClear(ledState, f);
    adjustLedState();
    delay(0);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++) 
        for (int f = 7; f < 8; f++) 
  {
    bitSet(ledState, i);
    bitSet(ledState, a);
    bitSet(ledState, b);
    bitSet(ledState, c);
    bitSet(ledState, d);
    bitSet(ledState, f);
    adjustLedState();
    delay(1000);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++) 
        for (int f = 7; f < 8; f++) 
  {
    bitClear(ledState, i);
        bitClear(ledState, d);
        bitClear(ledState, a);
        bitClear(ledState, c);
        bitClear(ledState, b);
        bitClear(ledState, f);
    adjustLedState();
    delay(0);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++) 
       for (int e = 6; e < 7; e++) 
        for (int f = 7; f < 8; f++) 
  {
    bitSet(ledState, i);
    bitSet(ledState, a);
    bitSet(ledState, b);
    bitSet(ledState, d);
    bitSet(ledState, e);
    bitSet(ledState, f);
    adjustLedState();
    delay(1000);
  }
  for (int i =1 ; i < 2; i++) 
     for (int a =2 ; a < 3; a++)  
    for (int b = 4; b < 5; b++) 
      for (int d = 5; d < 6; d++) 
       for (int e = 6; e < 7; e++) 
        for (int f = 7; f < 8; f++) 
  {
    bitClear(ledState, i);
        bitClear(ledState, d);
        bitClear(ledState, a);
        bitClear(ledState, b);
        bitClear(ledState, e);
        bitClear(ledState, f);
    adjustLedState();
    delay(0);
  }
  for (int i =1 ; i < 2; i++) 
    for (int b = 4; b < 5; b++) 
       for (int e = 6; e < 7; e++) 
        for (int f = 7; f < 8; f++) 
  {
    bitSet(ledState, i);
    bitSet(ledState, b);
    bitSet(ledState, e);
    bitSet(ledState, f);
    adjustLedState();
    delay(1000);
  }
  for (int i =1 ; i < 2; i++) 
    for (int b = 4; b < 5; b++) 
       for (int e = 6; e < 7; e++) 
        for (int f = 7; f < 8; f++) 
  {
    bitClear(ledState, i);
        bitClear(ledState, b);
        bitClear(ledState, e);
        bitClear(ledState, f);
    adjustLedState();
    delay(0);
  }
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++) 
       for (int e = 6; e < 7; e++) 
        for (int f = 7; f < 8; f++) 
  {
    bitSet(ledState, a);
    bitSet(ledState, c);
    bitSet(ledState, e);
    bitSet(ledState, f);
    adjustLedState();
    delay(5000);
  }
     for (int a =2 ; a < 3; a++)  
     for (int c=3 ; c < 4; c++)  
       for (int e = 6; e < 7; e++) 
        for (int f = 7; f < 8; f++) 
  {
        bitClear(ledState, a);
        bitClear(ledState, c);
        bitClear(ledState, e);
        bitClear(ledState, f);
    adjustLedState();
    delay(0);
  }

}
void adjustLedState() 
{
  PORTD  = ledState;
}  
