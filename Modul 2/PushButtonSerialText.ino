#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x3F for a 16 chars and 2 line display
int tombol1 = 5;

void setup() {
  pinMode(tombol1, INPUT);
  lcd.backlight();
  lcd.init();
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.print("Hello");
}
void loop() {
  if (Serial.available()) {
    delay(100);
    lcd.clear();
    while (Serial.available() > 0) {
      lcd.write(Serial.read());
    }
  }
  if (digitalRead(tombol1) == LOW) {
      for (int positionCounter = 0;
           positionCounter < 25;
           positionCounter++) {
        lcd.scrollDisplayRight();
        delay(150);
      }
}
}
