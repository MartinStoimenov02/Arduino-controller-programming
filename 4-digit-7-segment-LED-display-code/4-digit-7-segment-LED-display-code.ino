void setup() {
  //put your setup code here, to run once:
  for(int i=0; i<=13; i++)
  {
   pinMode(i, OUTPUT);
  }
}

void nullOutputs(){
  for(int i = 0; i<=7; i++){digitalWrite(i, HIGH);}
  for(int i = 9; i<=12; i++){digitalWrite(i, LOW);}
}

void loop() {
  nullOutputs();
  for(int i = 0; i<=6; i++){
    if(i!=3){
      digitalWrite(i, LOW);
    }
  }
  digitalWrite(9, HIGH);

  delay(1);

  nullOutputs();
  for(int i = 2; i<=6; i++){
      digitalWrite(i, LOW);
  }
  digitalWrite(10, HIGH);

  
  delay(1);

  nullOutputs();
  for(int i = 0; i<=5; i++){
    if(i!=1 && i!=2)
      digitalWrite(i, LOW);
  }
  digitalWrite(11, HIGH);

    delay(1);

  nullOutputs();
  for(int i = 1; i<=6; i++){
    if(i!=5)
      digitalWrite(i, LOW);
  }
  digitalWrite(12, HIGH);

  delay(1);
}
