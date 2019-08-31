#include <Ultrasonic.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
Ultrasonic ultrasonic(A0,A1);
 int Height;

void setup() {
    lcd.begin(16, 2);
     }

void loop()
{
  lcd.clear();
  lcd.print("Distance: ");
  lcd.print(ultrasonic.Ranging(CM));
  lcd.print("cm");
  lcd.setCursor(0, 1);
  lcd.print("Height: ");
  Height=31-(ultrasonic.Ranging(CM));
  lcd.print(Height);
  lcd.print("cm");
    
  delay(1000);
  }




