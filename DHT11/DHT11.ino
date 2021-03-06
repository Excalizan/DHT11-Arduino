#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11

DHT sensor(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 Testi");
  sensor.begin();

}

void loop() {
  delay(1000);

  float h = sensor.readHumidity();
  float t = sensor.readTemperature();
  float f = sensor.readTemperature(true);

  Serial.print("Nem: ");
  Serial.print(h);
  Serial.println("%");

  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C");

  Serial.print(f);
  Serial.println(" *F");

  Serial.println(" ");

}
