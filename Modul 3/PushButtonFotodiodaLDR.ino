int lightpin = A0;
int ledPin = 12;
int buzz = 11;
int senRead = A1;
int limit = 850;
int tomboll = 5;
int tombol2 = 6;
int pd = A1;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(pd, INPUT);
  pinMode(buzz, OUTPUT);
  pinMode(tombol1, INPUT);
  pinMode(tombol2, INPUT);
  digitalWrite(buzz, LOW);
  Serial.begin(9600);
}
 void loop() {
 if (digitalRead(tomboll) == HIGH) {
  Serial.println(analogRead(lightPin));
  analogWrite(ledPin, analogRead(lightpPin) / 4);
  delay(250);
}
if (digitalRead(tombol2) == HIGH) {
  int val = analogRead(pd);
  Serial.println(val);
  if (val <= limit) {
  digitalWrite(buzz, HIGH);
  delay(250);
} 
  else if (val > limit) {
   digitalWrite(buzz, LOW);
    delay(250);
   }
  }
}
