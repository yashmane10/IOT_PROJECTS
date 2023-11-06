
void setup() {
  // put your setup code here, to run once:
pinMode(A1,INPUT);
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
int adc=analogRead(A1);
int dB=(adc+83.2073)/11.003;
Serial.print("Sound in dB ");

Serial.println(dB);
delay(100);

}
