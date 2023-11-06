#include<NewPing.h>

int trigger_pin=9;
int echo_pin=10;
int max_distance=100;
int distance;
NewPing sonar(trigger_pin,echo_pin,max_distance);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(42,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  distance= sonar.ping_cm();
  Serial.println(distance);
  delay(500);
  if(distance<=10)
  {
      digitalWrite(42, HIGH);
      digitalWrite(6,HIGH);
  }
  else
  {
    digitalWrite(42, LOW);
      digitalWrite(6,LOW);
  }
}
