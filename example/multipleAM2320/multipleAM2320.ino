#include <SoftwareWire.h>
#include <AM2320.h>



AM2320 sensor1(5,6); // AM2320 sensor attached SDA to digital PIN 5 and SCL to digital PIN 6
AM2320 sensor2(9,10); // AM2320 sensor attached SDA to digital PIN 9 and SCL to digital PIN 10

void setup() {
  Serial.begin(9600);
}

void loop() {

  switch(sensor1.Read()) {
    case 2:
      Serial.println("CRC failed");
      break;
    case 1:
      Serial.println("Sensor1 offline");
      break;
    case 0:
      Serial.print("Humidity: ");
      Serial.print(sensor1.h);
      Serial.print("%\t Temperature: ");
      Serial.print(sensor1.t);
      Serial.println("*C");
      break;
  }

   switch(sensor2.Read()) {
    case 2:
      Serial.println("CRC failed");
      break;
    case 1:
      Serial.println("Sensor2 offline");
      break;
    case 0:
      Serial.print("Humidity: ");
      Serial.print(sensor2.h);
      Serial.print("%\t Temperature: ");
      Serial.print(sensor2.t);
      Serial.println("*C\n\n");
      break;
  }

  delay(1000);
}
