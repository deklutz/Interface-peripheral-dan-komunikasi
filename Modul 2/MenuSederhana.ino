#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x3F for a 16 chars and 2 line display
int sw_ok = 7;
int sw_up = 6;
int sw_back = 5;
int batas;

void setup() {
  lcd.backlight();
  lcd.init();
  lcd.begin(16, 2);
  lcd.setCursor(4, 0);
  lcd.print("D3TK-46-01");
  delay(3000);
  batas = 0;
  menu();
}
void loop() {
  for (int i = 0; i <= batas; i++) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("BATAS : ");
    lcd.setCursor(7, 0);
    lcd.print(batas);
    lcd.setCursor(0, 1);
    lcd.print("Data : ");
    lcd.setCursor(7, 1);
    lcd.print(i);
    delay(1000);
  }
}

void menu() {
  //..................
set:
  lcd.clear();
  lcd.setCursor(5, 0);
  lcd.print("SETTING");
  lcd.setCursor(0, 1);
  lcd.print("SET");
  lcd.setCursor(11, 1);
  lcd.print("START");
  //..................
  if (digitalRead(sw_ok) == LOW) {  //..................
    while (digitalRead(sw_ok) == LOW) {}
    goto set1;
  }
  if (digitalRead(sw_back) == LOW) {
    //..................
    while (digitalRead(sw_back) == LOW) {}  //..................
    goto start;
  } else {
    goto set;
    //..................
  }
set1:  //..................
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("BATAS :");
  lcd.setCursor(7, 0);
  lcd.print(batas);
  lcd.setCursor(0, 1);
  lcd.print("SET");
  lcd.setCursor(7, 1);
  lcd.print("UP");
  lcd.setCursor(12, 1);
  lcd.print("DOWN");
  if (digitalRead(sw_ok) == LOW) {
    while (digitalRead(sw_ok) == LOW) {}  //..................
    goto set;                             //..................
  }
  if (digitalRead(sw_back) == LOW) {  //..................
    batas = batas - 1;
    if (batas < 0) {
      batas = 0;
    }
    delay(100);
    goto set1;
  }
  if (digitalRead(sw_up) == LOW) {
    batas = batas + 1;
    //..................
    delay(100);
    goto set1;
  } else {
    goto set1;
    //..................
  }
start:
  lcd.clear();
  lcd.setCursor(8, 0);
  lcd.print("DONE");
  delay(3000);
}
