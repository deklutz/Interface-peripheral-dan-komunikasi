int led = 11; // Pin yang digunakan untuk menaruh LED 
int i; 

void setup(){ 
pinMode(led, OUTPUT); // Set LED sebagai output
} 

void loop(){ 
  for (i=0; i<=255; i+=5){ // Untuk menyalakan fading pada led
    analogWrite(led,i); 
    delay(100); 
 } 
 for (i=255; i>=0; i-=5){  // Untuk meredupkan fading pada led
  analogWrite(led,i); 
   delay(100); 
 } 
} 
