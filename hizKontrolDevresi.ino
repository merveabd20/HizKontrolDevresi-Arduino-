int DC=3; // dc motor
int POT=A0; //potansiyometre
int LED=2;
int motorHiz;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(DC,OUTPUT);
}

void loop()
{
  motorHiz=analogRead(POT);
  motorHiz=map(motorHiz,0,1023,0,255);
  analogWrite(DC,motorHiz);
  Serial.print("Hiz: ");
  Serial.println(motorHiz);
  if(motorHiz>150){
  digitalWrite(LED, HIGH);
  }
  if(motorHiz<150){
  digitalWrite(LED, LOW);
  }
}
