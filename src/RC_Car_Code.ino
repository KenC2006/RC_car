int incomingValue=0;

int leftSidePin1=2;
int leftSidePin2=3;

int rightSidePin1=4;
int rightSidePin2=5;
void setup() {
  pinMode(leftSidePin1,OUTPUT);
  pinMode(leftSidePin2,OUTPUT);
  pinMode(rightSidePin1,OUTPUT);
  pinMode(rightSidePin2,OUTPUT);

  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()>0){
    incomingValue=Serial.read();
    Serial.println(incomingValue);
  }
  
 

  if (incomingValue==49){
    //UP
    digitalWrite(leftSidePin1,HIGH);
    digitalWrite(leftSidePin2,LOW);
    digitalWrite(rightSidePin1,LOW);
    digitalWrite(rightSidePin2,HIGH);
  }
  
  else if (incomingValue==50){
    //RIGHT
    digitalWrite(leftSidePin1,HIGH);
    digitalWrite(leftSidePin2,LOW);
    digitalWrite(rightSidePin1,HIGH);
    digitalWrite(rightSidePin2,LOW);
  }

  else if (incomingValue==51){
    //BACK
    digitalWrite(leftSidePin1,LOW);
    digitalWrite(leftSidePin2,HIGH);
    digitalWrite(rightSidePin1,HIGH);
    digitalWrite(rightSidePin2,LOW);
  }

  else if (incomingValue==52){
    //LEFT
    digitalWrite(leftSidePin1,LOW);
    digitalWrite(leftSidePin2,HIGH);
    digitalWrite(rightSidePin1,LOW);
    digitalWrite(rightSidePin2,HIGH);
  }

  else if (incomingValue==53){
    //STOP
    digitalWrite(leftSidePin1,LOW);
    digitalWrite(leftSidePin2,LOW);
    digitalWrite(rightSidePin1,LOW);
    digitalWrite(rightSidePin2,LOW);
  }
}
