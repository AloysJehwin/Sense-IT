//DFRobot.com
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.print("Hello, world!");
  delay(1500);
  lcd.clear();
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("voidloopRobotech");
  lcd.setCursor(0,1);
  lcd.print("    Subscribe");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("             ");
  delay(500);
  
  
}
