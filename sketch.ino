#include <WiFi.h>
#include "ThingSpeak.h"
#include "DHTesp.h"

const char* ssid = "Wokwi-GUEST";
const char* password = "";

unsigned long myChannelNumber = 3188529;  
const char * myWriteAPIKey = "LQY86NN1F25GDVKK"; 

WiFiClient client;
DHTesp dht;

void setup() {
  Serial.begin(115200);
  Serial.println("Booting...");

  dht.setup(15, DHTesp::DHT22);  

  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(300);
  }

  Serial.println("\nWiFi Connected!");
  ThingSpeak.begin(client);
}

void loop() {

  TempAndHumidity data = dht.getTempAndHumidity();

  Serial.println("-------------------------");
  Serial.println("Temperature: " + String(data.temperature, 1) + " °C");
  Serial.println("Humidity: " + String(data.humidity, 1) + " %");

  ThingSpeak.setField(1, data.temperature);
  ThingSpeak.setField(2, data.humidity);

  int code = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);

  if (code == 200) {
    Serial.println("Data sent successfully!");
  } else {
    Serial.println("Error: " + String(code));
  }

  Serial.println("Waiting 20 seconds...");
  delay(20000);
}
