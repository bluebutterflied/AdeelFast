#include<LiquidCrystal.h>
const int rw=12,e=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rw,e,d4,d5,d6,d7);
float input_voltage=0.0;
void setup(){
  lcd.begin(16,2);
  lcd.print("DVM by Adeel");
}
void loop(){
  int value=analogRead(A0);
  input_voltage=((value*5)/1024)+0.5;
  lcd.setCursor(0,1);
lcd.print("voltage is");
lcd.print(input_voltage);
}
