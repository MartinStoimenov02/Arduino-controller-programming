/*
Simple Temperature uses the lm35 in the basic centigrade temperature configuration
*/
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
float temp;
int tempPin = 2; // analog input pin
int sampleTime = 1000; // 1 second dafault 
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.clear();
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  delay(100);
  lcd.clear();
  temp = analogRead(tempPin);
  temp = temp * 0.48828125;
  Serial.print("CELSIUS: ");
  Serial.print(temp);
  Serial.println("*C ");
 lcd.setCursor(3,0);
  lcd.print(temp);
  lcd.setCursor(8,0);
  lcd.print("*C");
}
