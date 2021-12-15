void setup() 
{
  for(int i=0; i<8; i++)
  {
   pinMode(i, OUTPUT);
  }
}
void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(7, HIGH);
  delay(15000);
  for(int i=0; i<4; i++)
  {
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(2, HIGH);
  delay(500);
  }
  digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
  delay(1500);
  digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
  delay(1500);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
  delay(15000);
    for(int i=0; i<4; i++)
  {
  digitalWrite(5, LOW);
  delay(500);
  digitalWrite(5, HIGH);
  delay(500);
  }
  digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
  delay(1500);
  digitalWrite(6, LOW);
   digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
  delay(1500);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}
