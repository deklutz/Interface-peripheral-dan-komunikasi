#include <LiquidCrystal_I2C.h> // Library yang dibutuhkan untuk LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);  // atur alamat LCD ke 0x27 dan memberi spesifikasi LCD 16x2 (16 baris x 2 kolom)
int tombol1 = 5; // Tombol 1 berada di pin 5 arduino
int tombol2 = 6; // Tombol 2 berada di pin 6 arduino
void setup() {
  pinMode(tombol1, INPUT); // set tombol 1 sebagai input
  pinMode(tombol2, INPUT); // set tombol 2 sebagai input
  lcd.init(); // inisialisasi display LCD
  lcd.backlight();  // Agar backlight menyala

  
  lcd.setCursor(2, 0);  // Mengatur kursor pada baris 2 kolom 0
  lcd.print("Hello world!"); // Tampilan pada LCD 2x0

  lcd.setCursor(2, 1);  //Mengatur kursor pada baris 2 kolom 1
  lcd.print("LCD Tutorial"); // Tampilan pada LCD 2x0
  
}
void loop() {
  
  if (digitalRead (tombol1) == LOW){ // Tombol 1 ditekan
    lcd.clear(); // Mengatur tampilan agar tulisan awal tidak terlihat
    lcd.setCursor(0, 0); // Set kursor pada 0x0
    lcd.print("Hanin"); //  Tampilkan tulisan Hanin
  }

   if (digitalRead (tombol2) == LOW){ // Tombol 2 ditekan
    lcd.setCursor(0, 1); // Set kursor pada 0x1
    lcd.print("Syifaa"); //  Tampilkan tulisan Syifaa
  }
}
