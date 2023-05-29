#include<Arduino.h>
void setup()
{
	pinMode(2,INPUT);
	pinMode(3,INPUT);
	pinMode(13,OUTPUT);
}
void loop()
{
int A = digitalRead(2);
int B = digitalRead(3);
int F = (!A)||(!B);
digitalWrite(13,F);
}
