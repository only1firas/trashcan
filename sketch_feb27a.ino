#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

byte pattern1[8]={
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
};
byte pattern2[8]={
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
};
byte pattern3[8]={
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
};
byte pattern4[8]={
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
};
byte pattern5[8]={
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
};




void setup() {
  // put your setup code here, to run once:
   lcd.begin(16, 2);
   lcd.createChar(1,pattern1);
   lcd.createChar(2,pattern2);
   lcd.createChar(3,pattern3);
   lcd.createChar(4,pattern4);
   lcd.createChar(5,pattern5);
   lcd.setCursor(0,1);

}

void loop() {
  // put your main code here, to run repeatedly:


  int i,j;
for(j=0;j<16;j++)
{
for(i=1;i<=5;i++)
{
  lcd.setCursor(j,0);
 lcd.write(i);
 delay(100);
}
}
  lcd.setCursor(0,0);
  lcd.print("                ");

}
