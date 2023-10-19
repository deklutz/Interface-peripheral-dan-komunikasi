int ledA = 9, ledB = 10, ledC = 11; // Pin yang terhubung LED
int tombol = 2; // Pin yang terhubung tombol
void setup(){ 
  pinMode(ledA,OUTPUT); // LED A sebagai output
  pinMode(ledB,OUTPUT); // LED B sebagai output
  pinMode(ledC,OUTPUT); // LED C sebagai output
  pinMode(tombol,INPUT); // Push button sebagai input
} 

void loop(){ 
 if(digitalRead(tombol)==LOW){ // Kondisi tombol ditekan (active low)
    digitalWrite(ledA,HIGH); // LED A akan menyala
   digitalWrite(ledB,HIGH); // LED  B akan menyala
   digitalWrite(ledC,HIGH); // LED C akan menyala
 } 
else{ // Kondisi tombol dilepaskan
    digitalWrite(ledA,LOW); // LED A akan mati
  digitalWrite(ledB,LOW); // LED B akan mati
  digitalWrite(ledC,LOW); // LED C akan mati
 } 
}
