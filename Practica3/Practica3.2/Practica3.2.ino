#include "DHT.h"
DHT dht15(15, DHT11);

void setup()
{
    Serial.begin(115200);
    delay(2000);
    dht15.begin();
}
void loop()
{
    Serial.println("***********************************");
    Serial.print("Temperatura en el sensor: ");
    Serial.println((dht15.readTemperature()));
    Serial.print("Humedad en el sensor: ");
    Serial.println((dht15.readHumidity()));
    Serial.println("***********************************");
    Serial.println("");
    
    delay(5000);
}
