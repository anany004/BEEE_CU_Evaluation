float t1,d1,t2,d2;
int i;
void setup()
{
Serial.begin(9600);
pinMode(9,OUTPUT);
pinMode(10,INPUT);
pinMode(3,OUTPUT);
pinMode(6,INPUT);
pinMode(11,OUTPUT);
}

void loop()
{
digitalWrite(9,LOW);
digitalWrite(9,HIGH);
delay(100);
digitalWrite(9,LOW);
  t1=pulseIn(10,HIGH);
d1=0.017*t1;
Serial.println(d1);
  if(d1==0 || d2==0)
  {
digitalWrite(11,HIGH);
  delay(1000);
digitalWrite(11,LOW);
    delay(1000);
  }
 
  {
digitalWrite(3,LOW);
digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);
  t2=pulseIn(6,HIGH);
d2=0.017*t2;
Serial.println(d2);
  if(d2>=0)
  {
digitalWrite(12,HIGH);
  delay(500);
digitalWrite(12,LOW);
    delay(500);
  }
  if(d1==0 && d2==0)
  
    digitalWrite(12,LOW);

  }
}
