#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  
  steady();
}
  

void loop() {

  moving();
}

void steady()
    {
      lcd.print("  HAPPY BIRTHDAY                              GOURAB");
      delay(1500);
      lcd.clear();
      delay(800);
      lcd.print("  HAPPY BIRTHDAY                              GOURAB");
      delay(800);
      lcd.clear();
      delay(800);
      lcd.print("  HAPPY BIRTHDAY                              GOURAB");
      delay(800);
      lcd.clear();
      delay(800);
      lcd.print("  HAPPY BIRTHDAY                              GOURAB");
      delay(800);
      lcd.clear();
      delay(800);
    }


  void moving()
    {
    lcd.print("Accha yeah batao party kab aur kaha doge");
    lcd.scrollDisplayLeft();
    delay(400);
    }
