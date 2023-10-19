int led = 11; // Pin yang terhubung LED
int tombol = 2; // Pin yang terhubung tombol
void setup(){ 
  pinMode(led,OUTPUT); // LED sebagai output
  pinMode(tombol,INPUT); // Push button sebagai input
} 

void loop(){ 
 if(digitalRead(tombol)==LOW){ // Kondisi tombol ditekan (active low)
    digitalWrite(led,HIGH); // LED akan menyala
 } 
else{ // Kondisi tombol dilepaskan
    digitalWrite(led,LOW); // LED akan mati
 } 
} 
