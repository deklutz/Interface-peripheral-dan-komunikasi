int buttonPin1 = 5; 
int ldrPin = A1;         
int limit = 700;
int buzz = 11;
int data;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(ldrPin, INPUT);
  pinMode(buzz, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin1) == LOW) {
   int val = analogRead(ldrPin);
   Serial.println(val);
   if (val <= limit){
    digitalWrite(buzz, LOW);
    delay (250);
   } else if (val > limit){
    digitalWrite (buzz, HIGH);
    delay (250);
   }
  }
}
  
