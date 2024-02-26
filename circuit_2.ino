int LDR = A0;
int LED = 2;
void setup()
{
// put your setup code here, to run once:
Serial.begin(9600);
pinMode (A0, INPUT);
pinMode (2, OUTPUT);
}
void loop()
{
// put your main code here, to run repeatedly:
int LDRValue = analogRead(A0);
Serial.print("sensor=");
Serial.println(LDRValue);
delay(100);
if(LDRValue <=940)
{
digitalWrite(2, HIGH);
Serial.println("It's Dark Outside; light status:ON");
}
else
{
digitalWrite(2,LOW);
Serial.println("It's Bright Outside, Lights status: OFF");
}
}
