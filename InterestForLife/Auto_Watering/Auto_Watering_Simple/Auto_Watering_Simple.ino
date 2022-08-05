#define dump_pin 13 // the pin of dump
int waterCycle= 3; // Unit: days
unsigned long long  delaySeconds=waterCycle*24*3600*1000; // Unit: ms
const int wateringTime=32000; // Unit: ms
void setup()
{
  pinMode(13,OUTPUT); 
}

void loop()
{
  for(;;)
  {
    digitalWrite(dump_pin,LOW);
    delay(delaySeconds); // It not a good way to delay, but it's simple.
    digitalWrite(dump_pin,HIGH);
    delay(wateringTime);
  }
}
