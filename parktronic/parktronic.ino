#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  pinMode(4, OUTPUT); //passive buzzer
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
}
void loop() {
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
  if (distance > 100)
  {
    for (int i = 0; i < 1; i++)
    {
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      delay(1000);
    }
  }
  else if (distance < 100 && distance > 90)
  {
    for (int i = 0; i < 1; i++)
    {
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      delay(900);
    }
  }
  else if (distance < 90 && distance > 80)
  {
    for (int i = 0; i < 1; i++)
    {
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      delay(800);
    }
  }
  else if (distance < 80 && distance > 70)
  {
    for (int i = 0; i < 1; i++)
    {
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      delay(700);
    }
  }
  else if (distance < 70 && distance > 60)
  {
    for (int i = 0; i < 1; i++)
    {
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      delay(600);
    }
  }
  else if (distance < 60 && distance > 50)
  {
    for (int i = 0; i < 1; i++)
    {
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      delay(500);
    }
  }
  else if (distance < 50 && distance > 40)
  {
    for (int i = 0; i < 1; i++)
    {
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      delay(400);
    }
  }
  else if (distance < 40 && distance > 30)
  {
    for (int i = 0; i < 1; i++)
    {
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      delay(300);
    }
  }
  else if (distance < 30 && distance > 20)
  {
    for (int i = 0; i < 1; i++)
    {
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      delay(200);
    }
  }
  else if (distance < 20 && distance > 10)
  {
    for (int i = 0; i < 1; i++)
    {
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      delay(100);
    }
  }
  else if (distance < 10)
  {
    for (int i = 0; i < 1; i++)
    {
      digitalWrite(4, HIGH);
      delay(1);
      digitalWrite(4, LOW);
      delay(1);
    }
  }
}
