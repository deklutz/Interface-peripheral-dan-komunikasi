#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x3F for a 16 chars and 2 line display
int tombol1 = 5;
int tombol2 = 6;
void setup() {
  pinMode(tombol1, INPUT);
  pinMode(tombol2, INPUT);
  lcd.backlight();
  lcd.init();
  lcd.begin(16, 2);
  lcd.print("Hanin Syifaa");
  delay(1000);
}
void loop() {
  if (digitalRead(tombol1) == LOW) {
    for (int positionCounter = 0;
         positionCounter < 25;
         positionCounter++) {
      lcd.scrollDisplayRight();
      delay(150);
    }
  }
  if (digitalRead(tombol2) == LOW) {
    for (int positionCounter = 0;
         positionCounter < 25;
         positionCounter++) {
      lcd.scrollDisplayLeft();
      delay(150);
    }
  }
}
