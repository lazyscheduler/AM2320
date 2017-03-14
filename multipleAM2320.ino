#include <SoftwareWire.h>
#include <AM2320.h>
#include "DHT.h"

#define DHTPIN 2     // what digital pin we're connected to

// Uncomment whatever type you're using!
//#define DHTTYPE DHT11   // DHT 11
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)


DHT dht(DHTPIN, DHTTYPE);

  AM2320 th;
  AM2320 th2;

void setup() {
    Serial.print("Humidity: ");

  Serial.begin(9600);
    Serial.print("Humidsadadity: ");

    dht.begin();

}

void loop() {

    // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("%\t Temperature: ");
  Serial.print(t);
  Serial.println(" *C");
  
  switch(th.Read(5,6)) {
    case 2:
      Serial.println("CRC failed");
      break;
    case 1:
      Serial.println("Sensor1 offline");
      break;
    case 0:
      Serial.print("Humidity: ");
      Serial.print(th.h);
      Serial.print("%\t Temperature: ");
      Serial.print(th.t);
      Serial.println("*C");
      break;
  }

   switch(th2.Read(9,10)) {
    case 2:
      Serial.println("CRC failed");
      break;
    case 1:
      Serial.println("Sensor2 offline");
      break;
    case 0:
      Serial.print("Humidity: ");
      Serial.print(th2.h);
      Serial.print("%\t Temperature: ");
      Serial.print(th2.t);
      Serial.println("*C\n\n");
      break;
  }

  delay(1000);
}
