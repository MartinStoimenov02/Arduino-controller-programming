#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display
 int n=0, m=0;
 const int startPin = 2;
 const int minutes = 3;
 const int hours = 4;
  const int setPin = 5;
int buttonState = 0;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
}

void loop()
{
  sett:
  buttonState2 = digitalRead(hours);

  if(buttonState2 == HIGH) {
    delay(100);
      m++;
      if (m>23)
      {
        m=0;
      }
  }
  if(m<10)
  {
  lcd.setCursor(3,0);
    lcd.print(m);
    lcd.setCursor(2,0);
    lcd.print("0");
  }
  else{
    lcd.setCursor(2,0);
    lcd.print(m);
  }
  buttonState1 = digitalRead(minutes);

  if(buttonState1 == HIGH) {
    delay(100);
      n++;
      if (n>59)
      {
        n=0;
      }
  }
  if(n<10)
  {
  lcd.setCursor(6,0);
    lcd.print(n);
    lcd.setCursor(5,0);
    lcd.print("0");
  }
  else{
    lcd.setCursor(5,0);
    lcd.print(n);
  }
    buttonState = digitalRead(startPin);
  if (buttonState == HIGH) {
        start:
    for(int i=m; i<24; i++)
    {
        if(i<10)
  {
  lcd.setCursor(3,0);
    lcd.print(i);
    lcd.setCursor(2,0);
    lcd.print("0");
  }
  else{
    lcd.setCursor(2,0);
    lcd.print(i);
  }
      for(int j=n; j<60; j++)
    {
      if(j<10)
  {
  lcd.setCursor(6,0);
    lcd.print(j);
    lcd.setCursor(5,0);
    lcd.print("0");
  }
  else{
    lcd.setCursor(5,0);
    lcd.print(j);
  }
  for(int k=0; k<59; k++)
  {
    lcd.setCursor(4,0);
    lcd.print(":");
    delay(506);
    lcd.setCursor(4,0);
    lcd.print(" ");
    delay(506);
    buttonState3 = digitalRead(setPin);
  if(buttonState3 == HIGH) {
    goto sett;
  }
  }
    }
     n=0;
    }
      m=0;
      goto start;
  }
}
