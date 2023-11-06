void setup() {
  // put your setup code here, to run once:
pinMode(A1,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x=analogRead(A1);
Serial.print("Intensity is");
Serial.println(x);
delay(100);
}
