#include <LiquidCrystal_I2C.h> // Library yang digunakan
LiquidCrystal_I2C lcd(0x27, 16, 2);  // set alamat LCD menjadi 0x27 untuk display 16x2

void setup() 
{ 
  lcd.init();
  lcd.backlight();  // Make sure backlight is on
  lcd.begin(16, 2); 
  lcd.print("hello, world!"); 
  delay(1000); 
} 

void loop() { 
   for (int positionCounter = 0; 
   positionCounter < 13; 
   positionCounter++) 
{ 
    lcd.scrollDisplayLeft(); 
    delay(150); 
 } 
 
  for (int positionCounter = 0; 
  positionCounter < 29; 
  positionCounter++) 
{ 
    lcd.scrollDisplayRight(); 
    delay(150); 
} 
   for (int positionCounter = 0;   
    positionCounter < 16; 
    positionCounter++) 
{ 
      lcd.scrollDisplayLeft(); 
      delay(150); 
} 
  
   delay(1000); 
} 
