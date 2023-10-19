#include <LiquidCrystal_I2C.h> // Library yang digunakan
LiquidCrystal_I2C lcd(0x27, 16, 2);  // set alamat LCD menjadi 0x27 untuk display 16x2
int tombol1 = 5;
int tombol2 = 6;
int tombol3 = 7;
void setup() {
  pinMode(tombol1, INPUT);
  pinMode(tombol2, INPUT);
  pinMode(tombol3, INPUT);
  lcd.init();
  // lcd.clear();
  lcd.backlight();  // Make sure backlight is on

  // Print a message on both lines of the LCD.
  lcd.setCursor(2, 0);  //Set cursor to character 2 on line 0
  lcd.print("Hello world!");

  lcd.setCursor(2, 1);  //Move cursor to character 2 on line 1
  lcd.print("LCD Tutorial");
  
}
void loop() {
  
  if (digitalRead (tombol1) == LOW){
    lcd.clear();
    lcd.setCursor(0, 0); 
    lcd.print("Hanin");
  }

   if (digitalRead (tombol2) == LOW){
    lcd.setCursor(0, 1); 
    lcd.print("Syifaa");
  }

  if (digitalRead (tombol3) == LOW){
     lcd.clear();
  }
}
