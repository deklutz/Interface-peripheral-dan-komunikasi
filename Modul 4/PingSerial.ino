//Mendefinisikan nomor pin
const int trigPin = 9;
const int echoPin = 10;
void setup() { 
pinMode(trigPin, OUTPUT); //Mengatur trigPin sebagai output
 pinMode(echoPin, INPUT); //Mengatur echoPin sebagai input
 Serial.begin(9600); //Mengaktifkan komunikasi serial
} 
void loop() 
{ 
//Deklarasi variabel
long duration, inches, cm;
// Pin trigPin clear
digitalWrite(trigPin, LOW);
delayMicroseconds(2); 
// Atur trigPin pada kondisi HIGH selama 10 microseconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
//Membaca echoPin, mengembalikan gelombang suara dalam satuan microseconds
duration = pulseIn(echoPin, HIGH);
//Memanggil fungsi untuk menghitung jarak dalam satuan inch
inches = microsecondsToInches(duration); 
// Memanggil fungsi untuk menghitung jarak dalam satuan cm
cm = microsecondsToCentimeters(duration); 
//Tampilkan hasil perhitungan pada serial monitor
Serial.print(inches); 
Serial.print(" in, "); 
Serial.print(cm); 
Serial.print(" cm"); 
Serial.println(); 
delay(100); 
} 
//fungsi untuk menghitung jarak dalam satuan inch
long microsecondsToInches(long microseconds) 
{ 
 return microseconds / 74 / 2; 
}
// fungsi untuk menghitung jarak dalam satuan cm
long microsecondsToCentimeters(long microseconds) 
{ 
 return microseconds / 29 / 2; 
} 
