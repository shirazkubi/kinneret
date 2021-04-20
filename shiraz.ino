#define btnPin        3
#define greenLedPin   5
#define redLedPin     8
#define blueLedPin    7

#define greenBtnPin   10
#define yellowBtnPin  6
#define redBtnPin     9
#define blueBtnPin    11

bool right=true;

void setup() {
  pinMode(greenLedPin,OUTPUT);
  pinMode(redLedPin,OUTPUT);
  pinMode(blueLedPin,OUTPUT);
  pinMode(redBtnPin,INPUT_PULLUP);
  pinMode(greenBtnPin,INPUT_PULLUP);
  pinMode(blueBtnPin,INPUT_PULLUP);
}

void loop() {
  if(digitalRead(redBtnPin)==LOW){
    right=true;
    if(right=true);
  digitalWrite(redLedPin,HIGH);
  if(digitalRead(redBtnPin)==HIGH){
    right=right;
     digitalWrite(redLedPin,LOW);
     delay(500);
  }
  
  }
   if(digitalRead(blueBtnPin)==LOW){
  right=true;
    if(right=true);
    digitalWrite(blueLedPin,HIGH);
     if(digitalRead(blueBtnPin)==HIGH){
      right=right;
     digitalWrite(blueLedPin,LOW);
     delay(500);
 {
  }
  if(digitalRead(greenBtnPin)==LOW){ 
   right=true;
    if(right=true);
  digitalWrite(greenLedPin,HIGH);
  if(digitalRead(greenBtnPin)==HIGH){
  right=right;
  digitalWrite(greenLedPin,LOW);
  delay(500);
  }
  }
     }
   }
}



 
  
