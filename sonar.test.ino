#include <NewPing.h>
#define MAX_DISTANCE 10 
#define TRIGGER_PIN 9
#define ECHO_PIN 10

NewPing sonar(TRIGGER_PIN,ECHO_PIN,MAX_DISTANCE);

void setup() 
{
  Serial.begin(9200);
}
void loop() 
{
delay(50);
unsigned int PING = sonar.ping_cm();
Serial.println ("DISTANCE : " + String(PING) + "cm"); 
}
