# ESP32 DHT22 IoT Project – ThingSpeak Integration

## Overview
This project uses an ESP32 DevKit-C V4 and a DHT22 temperature/humidity sensor to collect environmental data and upload it to ThingSpeak for online visualization.

## Hardware Used
- ESP32 DevKit-C V4
- DHT22 Sensor
- Wokwi Simulator (no physical hardware needed)

## Wiring
| DHT22 Pin | ESP32 Pin |
|----------|-----------|
| VCC      | 3.3V      |
| GND      | GND       |
| DATA     | GPIO 15   |

## ThingSpeak Setup
1. Create a new channel  
2. Set **Field 1 = Temperature**  
3. Set **Field 2 = Humidity**  
4. Copy:
   - Channel ID  
   - Write API Key  
5. Paste them in the Arduino code

## Files in This Repository
- `sketch.ino` → ESP32 code  
- `diagram.json` → Wokwi circuit  
- `README.md` → Documentation

## Author
Islam Yasin  
University ID: 12112662
