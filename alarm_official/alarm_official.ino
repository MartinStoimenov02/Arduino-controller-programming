#include <SPI.h>
#include <MFRC522.h>
 #include <IRremote.h>  
#define SS_PIN 10
#define RST_PIN 9
#define echoPin A5 
#define trigPin A4 
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
 long duration; // variable for the duration of sound wave travel
int distance;
#include <Keypad.h>
const int ROW_NUM = 4; //four rows
const int COLUMN_NUM = 3; //three columns
char keys[ROW_NUM][COLUMN_NUM] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte pin_rows[ROW_NUM] = {8, 7, 6, 5}; //connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] = {4, 3, 2}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

const String password = "1234"; // change your password here
String input_password;
int RECV_PIN =A0;         
IRrecv irrecv(RECV_PIN);     
decode_results results;  
void setup() 
{
  Serial.begin(9600);   // Initiate a serial communication
  input_password.reserve(32);
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
  Serial.println("Approximate your card to the reader...");
  Serial.println();
pinMode(A3, OUTPUT);
pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT);
   irrecv.enableIRIn();
  
}
void loop() 
{
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
  // Displays the distance on the Serial Monitor
    if(distance>15){
  digitalWrite(A3, HIGH);
  }
  else{
    digitalWrite(A3, LOW);
  }
       if (irrecv.decode(&results)){     
int value = results.value;     
Serial.println(value);              
       irrecv.resume();         
      if(value=30855)
   {
    for(int i=0; i<2; i++)
        {
        digitalWrite(A3, HIGH);
    delay(100);
    digitalWrite(A3, LOW);
    delay(100);
      }
digitalWrite(A3, LOW);
    delay(5000);
  }
   }
    char key = keypad.getKey();

  if (key){
    Serial.println(key);
    digitalWrite(A3, HIGH);
    delay(100);

    if(key == '*') {
      input_password = ""; // clear input password
    } else if(key == '#') {
      if(password == input_password) {
        
        Serial.println("password is correct");
                    for(int i=0; i<2; i++)
        {
        digitalWrite(A3, HIGH);
    delay(100);
    digitalWrite(A3, LOW);
    delay(100);
      }
        digitalWrite(A3, LOW);
    delay(5000);
        // DO YOUR WORK HERE
        
      } else {
        Serial.println("password is incorrect, try again");
        digitalWrite(A3, HIGH);
    delay(1000);
      }

      input_password = ""; // clear input password
    } else {
      input_password += key; // append new character to input password string
    }
  }
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  content.toUpperCase();
  if (content.substring(1) == "37 48 FC 3A" || content.substring(1) == "7B AF 27 1B") //change here the UID of the card/cards that you want to give access
  {
     for(int i=0; i<2; i++)
        {
        digitalWrite(A3, HIGH);
    delay(100);
    digitalWrite(A3, LOW);
    delay(100);
      }
digitalWrite(A3, LOW);
    delay(5000);
  }
  else{
        digitalWrite(A3, HIGH);
    delay(1000);
  }
} 
