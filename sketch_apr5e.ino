const int led = 8;
const int pir = 2;
int motion;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);
}

void loop(){
  motion = digitalRead(pir);
  if(motion){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}