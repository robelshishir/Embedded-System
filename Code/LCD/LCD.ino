#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd.begin(16, 2);
  lcd.print("*");
  lcd.setCursor(6,0);
  lcd.print("DIU");
  lcd.setCursor(15,0);
  lcd.print("*");
  
  lcd.setCursor(0,1);
  lcd.print("****************");
  delay(2000);
  
  //2nd
  lcd.setCursor(0,0);
  lcd.print("                ");
  lcd.setCursor(0,1);
  lcd.print("                ");
  
  lcd.setCursor(0,0);
  lcd.print("*");
  lcd.setCursor(4,0);
  lcd.print("EMBEDDED");
  lcd.setCursor(15,0);
  lcd.print("*");
  
  lcd.setCursor(0,1);
  lcd.print("*");
  lcd.setCursor(4,1);
  lcd.print("System");
  lcd.setCursor(15,1);
  lcd.print("*");
  delay(2000);
  
  //3rd
  lcd.setCursor(0,0);
  lcd.print("                ");
  lcd.setCursor(0,1);
  lcd.print("                ");
  
  lcd.setCursor(0,0);
  lcd.print("Loading");
  for(int i=0;i<9;i++)
    {
      lcd.setCursor(7+i,0);
      lcd.print(".");
      delay(250);
    }
}

void loop()
{
  //1
  lcd.setCursor(0,0);
  lcd.print("                ");
  lcd.setCursor(0,1);
  lcd.print("                ");
  
  lcd.setCursor(0,0);
  lcd.print("Name: Robel");
  lcd.setCursor(0,1);
  lcd.print("Id: 5538");
  delay(1000);
  
  //2
  lcd.setCursor(0,0);
  lcd.print("                ");
  lcd.setCursor(0,1);
  lcd.print("                ");
  
  lcd.setCursor(0,0);
  lcd.print("Name: Babu");
  lcd.setCursor(0,1);
  lcd.print("Id: 5879");
  delay(1000);
}
