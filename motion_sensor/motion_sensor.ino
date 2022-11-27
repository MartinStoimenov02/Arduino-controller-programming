#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3
long duration; // variable for the duration of sound wave travel
int distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  pinMode(4, OUTPUT); //passive buzzer
    Serial.begin(9600);
}

void loop() {
   int analogValue = analogRead(A0);
  // put your main code here, to run repeatedly:
// Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  Serial.print("\n Analog reading: ");
  Serial.print(analogValue); 
  if (analogValue < 100){
    Serial.print("\n distance: ");
    Serial.print(distance); 
  if (distance<200)
  {
    for (int i = 0; i < 1; i++)
    {
      digitalWrite(4, HIGH);
      delay(10000);
    }
  }
  digitalWrite(4, LOW);
 }
}
