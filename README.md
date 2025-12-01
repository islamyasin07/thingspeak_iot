# ESP32 DHT22 IoT Project – ThingSpeak Integration

This IoT project reads temperature and humidity values using an ESP32 DevKit-C V4 and a DHT22 sensor, then uploads the data to ThingSpeak for real-time cloud visualization.

---

## 💡 Features
- Live temperature and humidity monitoring
- Cloud upload every 20 seconds
- Works fully in Wokwi (no physical hardware needed)
- Clean and simple circuit design

---

## 🛠 Hardware Used
- ESP32 DevKit-C V4
- DHT22 sensor

---

## 🔌 Wiring Diagram

| DHT22 Pin | ESP32 Pin |
|-----------|-----------|
| VCC       | 3.3V      |
| GND       | GND       |
| DATA      | GPIO 15   |

---

## 📁 Files

| File | Description |
|------|-------------|
| `sketch.ino` | Main Arduino code with WiFi & ThingSpeak |
| `diagram.json` | Wokwi circuit diagram |
| `README.md` | Project documentation |

---

## ☁ ThingSpeak Setup
1. Create channel  
2. Enable:
   - Field 1 → Temperature  
   - Field 2 → Humidity  
3. Copy:
   - Channel ID  
   - Write API Key  
4. Paste values in `sketch.ino`

---

## 👤 Author
**Islam Yasin**  
University ID: 12112662  
