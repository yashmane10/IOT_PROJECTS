
void setup() {
  // put your setup code here, to run once:
 pinMode(42,OUTPUT);
 //pinMode(5,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
/*digitalWrite(42,HIGH);
delay(2000);
digitalWrite(42,LOW);
delay(2000);
*/

int i=0;
for(i=0;i<255;i=i+5)
{
 analogWrite(42,i);
 Serial.println(i);
 delay(10);
}
for(i=250;i>0;i=i-5)
{
 analogWrite(42,i);
 Serial.println(i);
 delay(10);
}

}
