int ledPin=7; // LED
int motionPin=13;// MOTION SENSOR [PIR]
int buzzerPin=8;// sound

void setup(){
  pinMode(ledPin,OUTPUT);// LED =OUTPUT
  pinMode(motionPin,INPUT); //motion sensor se input aaega
    pinMode(buzzerPin,INPUT); 

  }
void loop(){
  int motionState=digitalRead(motionPin);// motion sensor reads motion
  if(motionState==HIGH){// mtlb motion
    digitalWrite(ledPin,HIGH);
    digitalWrite(buzzerPin, HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
      digitalWrite(buzzerPin, LOW);}
}
    
