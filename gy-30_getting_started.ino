#include<Wire.h> 
#include <BH1750.h>  

BH1750 GY30;

void setup()
{
  Serial.begin(9600); 
  Wire.begin(); 
  GY30.begin();
  Serial.println("SAIF LX WORKSHOP");
}
void loop()
{
  float lux = GY30.readLightLevel(); 
  Serial.println((String)"Light: " + lux + " lx"); 
  delay(1000); 
}
