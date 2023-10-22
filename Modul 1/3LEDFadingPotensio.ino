int ledA = 9, ledB = 10, ledC = 11; // Pin yang digunakan untuk menaruh LED 
int pot = A0;
int i; 
int data;

void setup(){ 
pinMode(ledA, OUTPUT); // Set LED sebagai output
pinMode(ledB, OUTPUT); // Set LED sebagai output
pinMode(ledC, OUTPUT); // Set LED sebagai output
pinMode(pot, INPUT); // Set potensiometer sebagai input
} 

void loop(){ 
  data = analogRead(pot); // Data dibaca dari pin analog yang tersambung dengan potensiometer
  data = data / 4 // Membagi hasil data menjadi 4 agar skala diturunkan ke range 0-255, karena analogWrite hanya menerima nilai kecerahan LED dari 0 (mati)-255 (paling terang)
    
  for (i=0; i<=255; i+=51){ // Untuk menyalakan fading pada led
    analogWrite(ledA,i); 
    delay(100); 
 } 
 for (i=255; i>=0; i-=51){  // Untuk meredupkan fading pada led
  analogWrite(ledA,i); 
   delay(100); 
 }
  
  delay (200);
  
  for (i=0; i<=255; i+=51){ // Untuk menyalakan fading pada led
    analogWrite(ledB,i); 
    delay(100); 
 } 
 for (i=255; i>=0; i-=51){  // Untuk meredupkan fading pada led
  analogWrite(ledB,i); 
   delay(100); 
 }
  
  delay (200);
  
  for (i=0; i<=255; i+=51){ // Untuk menyalakan fading pada led
    analogWrite(ledC,i); 
    delay(100); 
 } 
 for (i=255; i>=0; i-=51){  // Untuk meredupkan fading pada led
  analogWrite(ledC,i); 
   delay(100); 
 } 
}
