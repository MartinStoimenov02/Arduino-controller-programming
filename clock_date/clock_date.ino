#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display
 int n=0, m=0, a=1, b=1, c=1, y=2020;
 const int startPin = 2;
 const int minutes = 3;
 const int hours = 4;
  const int setPin = 5;
  const int date = 7;
  const int set_month = 6;
  const int setYearUp = 8;
  const int setYearDown = 9;
int buttonState = 0;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int buttonState7 = 0;
void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
    lcd.print("time:");
    lcd.setCursor(0,1);
    lcd.print("date:");
    lcd.setCursor(8,1);
    lcd.print(".");
    lcd.setCursor(11,1);
    lcd.print(".");
}

void loop()
{
  sett:
  buttonState6 = digitalRead(setYearUp);
    buttonState7 = digitalRead(setYearDown);
  if(buttonState6 == HIGH) {
    delay(100);
      y++;
  }
  else if(buttonState7 == HIGH) {
    delay(100);
      y--;
  }
  lcd.setCursor(12,1);
    lcd.print(y);

  buttonState5 = digitalRead(set_month);
  if(buttonState5 == HIGH) {
    delay(100);
      b++;
      if (b>12)
      {
        b=1;
      }
  }
  if(b<10)
  {
  lcd.setCursor(10,1);
    lcd.print(b);
    lcd.setCursor(9,1);
    lcd.print("0");
  }
  else{
    lcd.setCursor(9,1);
    lcd.print(b);
  }

    buttonState4 = digitalRead(date);
  if(buttonState4 == HIGH) {
    delay(100);
      a++;
      if(b==4||b==6||b==9||b==11)
  {
    if (a>30)
      {
        a=1;
      }
  }
  else if(b==2)
  {
    if(y%4==0)
    {
      if (a>29)
      {
        a=1;
      }
    }
    else{
     if (a>28)
      {
        a=1;
      }

    }
  }
  else{
    if (a>31)
      {
        a=1;
      }
  }
  }
  if(a<10)
  {
  lcd.setCursor(7,1);
    lcd.print(a);
    lcd.setCursor(6,1);
    lcd.print("0");
  }
  else{
    lcd.setCursor(6,1);
    lcd.print(a);
  }
   
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
  lcd.setCursor(7,0);
    lcd.print(m);
    lcd.setCursor(6,0);
    lcd.print("0");
  }
  else{
    lcd.setCursor(6,0);
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
  lcd.setCursor(10,0);
    lcd.print(n);
    lcd.setCursor(9,0);
    lcd.print("0");
  }
  else{
    lcd.setCursor(9,0);
    lcd.print(n);
  }
    buttonState = digitalRead(startPin);
  if (buttonState == HIGH) {
        start:
        for (int x=y; x<9999; x++)
        {
          lcd.setCursor(12,1);
    lcd.print(x);
          for (int z=b; z<=12; z++)
        {
          if(z<10)
  {
  lcd.setCursor(10,1);
    lcd.print(z);
    lcd.setCursor(9,1);
    lcd.print("0");
  }
  else{
    lcd.setCursor(9,1);
    lcd.print(z);
  }
if(z==4||z==6||z==9||z==11)
  {
    c=30;
  }
  else if(z==2)
  {
    if(x%4==0)
    {
      c=29;
    }
    else{
      c=28;
    }
  }
  else{
    c=31;
  }
           for (int o=a; o<=c; o++)
        {
          if(o<10)
  {
  lcd.setCursor(7,1);
    lcd.print(o);
    lcd.setCursor(6,1);
    lcd.print("0");
  }
  else{
    lcd.setCursor(6,1);
    lcd.print(o);
  }
          for(int i=m; i<24; i++)
    {
        if(i<10)
  {
  lcd.setCursor(7,0);
    lcd.print(i);
    lcd.setCursor(6,0);
    lcd.print("0");
  }
  else{
    lcd.setCursor(6,0);
    lcd.print(i);
  }
      for(int j=n; j<60; j++)
    {
      if(j<10)
  {
  lcd.setCursor(10,0);
    lcd.print(j);
    lcd.setCursor(9,0);
    lcd.print("0");
  }
  else{
    lcd.setCursor(9,0);
    lcd.print(j);
  }
  for(int k=0; k<60; k++)
  {
    lcd.setCursor(8,0);
    lcd.print(":");
    delay(500);
    lcd.setCursor(8,0);
    lcd.print(" ");
    delay(500);
    buttonState3 = digitalRead(setPin);
  if(buttonState3 == HIGH) {
    goto sett;
  }
  }
    }
     n=0;
    }
      m=0;
        }
        a=1;
        }
          b=1;
        }
      goto start;
  }
}
