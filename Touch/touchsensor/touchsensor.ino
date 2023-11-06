void setup() {
  // put your setup code here, to run once:
pinMode(9,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x=digitalRead(9);
if(x==HIGH)
{
  Serial.println("TOUCH Detected");  
}
else
{
  Serial.println("No TOUCH");
}

}
