int led = 11; // letak pin LED yang disambung ke arduino 

void setup(){ 
  pinMode(led, OUTPUT); // Set led sebagai output
} 
void loop(){ 
  digitalWrite(led, HIGH); // Pembacaan LED agar menyala
  delay(1000);  // Waktu yang diset 1 detik menyala
  digitalWrite(led,LOW); // Pembacaan LED agar redup
  delay(1000); // Waktu yang diset 1 detik redup
} 
