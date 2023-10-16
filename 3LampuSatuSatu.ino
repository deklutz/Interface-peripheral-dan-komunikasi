int ledA = 9, ledB = 10, ledC = 11; // letak pin LED yang disambung ke arduino 

void setup(){ 
  pinMode(ledA, OUTPUT); // Set led pertama sebagai output
  pinMode(ledB, OUTPUT); // Set led kedua sebagai output
  pinMode(ledC, OUTPUT); // Set led ketiga sebagai output
} 
void loop(){ 
  digitalWrite(ledA, HIGH); // Pembacaan LED A agar menyala
  delay(500);  // Waktu yang diset 0.5 detik menyala
  digitalWrite(ledA,LOW); // Pembacaan LED A agar redup
  delay(500);  // Waktu yang diset 0.5 detik menyala
  digitalWrite(ledB, HIGH); // Pembacaan LED B agar menyala
  delay(500);  // Waktu yang diset 0.5 detik menyala
  digitalWrite(ledB,LOW); // Pembacaan LED B agar redup
  delay(500);  // Waktu yang diset 0.5 detik menyala
  digitalWrite(ledC, HIGH); // Pembacaan LED C agar menyala
  delay(500);  // Waktu yang diset 0.5 detik menyala
  digitalWrite(ledC,LOW); // Pembacaan LED C agar redup
  delay(500); // Waktu yang diset 0.5 detik redup
} 
