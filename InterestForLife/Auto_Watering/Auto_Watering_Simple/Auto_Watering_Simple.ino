#define dump_pin A1 // the pin of dump
int waterCycle= 3; // Unit: days
unsigned long long  delaySeconds=waterCycle*24*3600*1000; // Unit: ms
const int wateringTime=32000; // Unit: ms
void setup()
{
}

void loop()
{
    analogWrite(dump_pin, 168); // The rated voltage of the dump is 3.3 V
    delay(delaySeconds); // It not a good way to delay, but it's simple.
    analogWrite(dump_pin, 0);
    delay(wateringTime);
  
}
