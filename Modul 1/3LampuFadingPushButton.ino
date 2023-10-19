int ledA = 9, ledB = 10, ledC = 11; // Pin yang digunakan untuk menaruh LED 
int tombol = 2; // pin yang digunakan untuk menaruh tombol
int i; 
int data;

void setup(){ 
pinMode(ledA, OUTPUT); // Set LED sebagai output
pinMode(ledB, OUTPUT); // Set LED sebagai output
pinMode(ledC, OUTPUT); // Set LED sebagai output
pinMode(tombol, INPUT); // Set potensiometer sebagai input
} 

void loop(){ 
 if (digitalRead(tombol) == LOW {
    
  for (i=0; i<=255; i+=5){ // Untuk menyalakan fading pada led
    analogWrite(ledA,i); 
    delay(100); 
 } 
 for (i=255; i>=0; i-=5){  // Untuk meredupkan fading pada led
  analogWrite(ledA,i); 
   delay(100); 
 }
  
  delay (200);
  
  for (i=0; i<=255; i+=5){ // Untuk menyalakan fading pada led
    analogWrite(ledB,i); 
    delay(100); 
 } 
 for (i=255; i>=0; i-=5){  // Untuk meredupkan fading pada led
  analogWrite(ledB,i); 
   delay(100); 
 }
  
  delay (200);
  
  for (i=0; i<=255; i+=5){ // Untuk menyalakan fading pada led
    analogWrite(ledC,i); 
    delay(100); 
 } 
 for (i=255; i>=0; i-=5){  // Untuk meredupkan fading pada led
  analogWrite(ledC,i); 
   delay(100); 
 } 
}

else{
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
}
}
