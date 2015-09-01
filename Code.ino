int trig=8;
int echo=9;
int a=12;
void setup() {
  pinMode(a,OUTPUT);
  Serial.begin(9600);  
}
  // put your setup code here, to run once:


void loop() {
  long duration,cms,in;
  pinMode(trig,OUTPUT);
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  pinMode(echo,INPUT);
  duration=pulseIn(echo,HIGH);
  cms=mtoc(duration);
  in=mtoi(duration);
  if(cms<=10)
  digitalWrite(a,HIGH);
  else
  digitalWrite(a,LOW);
  Serial.print(cms);
  Serial.print("cm");
  Serial.println();
}
long mtoc(long m)
{
  return m/29/2;
}

  

  
  
  // put your main code here, to run repeatedly:


