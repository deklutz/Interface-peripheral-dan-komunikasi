#include <LiquidCrystal_I2C.h> // Library yang digunakan
LiquidCrystal_I2C lcd(0x27, 16, 2);  // set alamat LCD menjadi 0x27 untuk display 16x2

void setup(){ 
  lcd.init();
  lcd.backlight();  // Make sure backlight is on
  lcd.begin(16, 2); 
  Serial.begin(9600); 
} 

void loop() { 
   if (Serial.available()) { 
    delay(100); 
    lcd.clear(); 
 while (Serial.available() > 0) { 
    lcd.write(Serial.read()); 
 } 
 } 
}
