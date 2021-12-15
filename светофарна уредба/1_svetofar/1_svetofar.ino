void setup() {

   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);

}

void loop() {
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  delay(15000);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  delay(1500);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
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
}
