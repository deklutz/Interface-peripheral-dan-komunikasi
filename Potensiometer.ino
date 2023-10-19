int led = 11; // Pin untuk mencolokkan LED  
int pot = A0; // Pin untuk mencolokkan potensiometer 
int data;

void setup(){ 
  pinMode(led,OUTPUT); // LED berperan sebagai output
  pinMode(pot,INPUT);  // Potensiometer berperan sebagai input
} 
void loop(){ 
  data=analogRead(pot); // Data dibaca dari pin analog yang tersambung dengan potensiometer
  data=data/4; // Membagi hasil data menjadi 4 agar skala diturunkan ke range 0-255, karena analogWrite hanya menerima nilai kecerahan LED dari 0 (mati)-255 (paling terang)
  analogWrite(led,data); // Membaca data LED agar kecerahan dapat diatur potensiometer
} 
