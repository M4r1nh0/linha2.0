#include <Ultrasonic.h>
 
#define trigger 4
#define echo 3
int distancia;
Ultrasonic ultrasonic(echo, trigger);
 
void setup(){
  Serial.begin(9600);
}
void loop(){
  distancia = ultrasonic.Ranging(CM);
  Serial.print(distancia);
  Serial.println("CM");
  delay(100);
}
