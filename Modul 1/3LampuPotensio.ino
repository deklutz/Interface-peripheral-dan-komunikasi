int ledA = 9, ledB = 10, ledC = 11; 
int pot = A0; 
int data; 

void setup(){ 
  pinMode(ledA,OUTPUT);
  pinMode(ledB,OUTPUT); 
  pinMode(ledC,OUTPUT); 
  pinMode(pot,INPUT); 
} 
void loop(){ 
  data=analogRead(pot); 
  data=data/4; 
  analogWrite(ledA,data); 
  analogWrite(ledB,data); 
  analogWrite(ledC,data); 
} 
