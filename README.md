# 🎤 Smart Switch Control using Microphone Sensor + Relay  

## 📖 Project Overview  
This project demonstrates a **clap/sound-controlled smart switch** using an Arduino, a microphone sensor, and a relay module.  
When the sensor detects a clap or loud sound, the Arduino toggles the relay state to switch an appliance **ON/OFF**.  

It’s a simple home automation project that allows you to control lights, fans, or any other electrical devices with just a clap.  

---

## ⚙️ Features  
- ✅ Detects sound/clap using microphone sensor.  
- ✅ Controls appliances using a **relay module**.  
- ✅ Works as a smart switch (toggles ON/OFF).  
- 🔌 Supports both **DC** and **AC appliances**.  
- 🔒 Debounce logic prevents false triggering.  

---

## 🛠️ Components Used  
- Arduino UNO (or Nano/compatible)  
- Microphone Sound Sensor Module  
- Relay Module (5V, single channel)  
- Appliance (bulb, fan, etc.)  
- Jumper wires & Breadboard  

---

## 🔌 Circuit Connections  

| Component              | Arduino Pin |
|------------------------|-------------|
| Microphone Sensor OUT  | D2          |
| Relay IN               | D8          |
| Relay VCC              | 5V          |
| Relay GND              | GND         |

**Relay Wiring for Appliance Control:**  
- `COM` → Power Supply Live Wire  
- `NO` (Normally Open) → Appliance Live Wire  
- Neutral wire connects directly from power supply to appliance  

⚠️ **Important:** Be very careful when handling **AC wiring**. Always use proper insulation or an enclosed relay module to prevent electric shock.  

---

## 📜 How It Works  
1. The microphone sensor detects a **clap/sound** and sends a HIGH signal to Arduino.  
2. Arduino toggles the relay state:  
   - First clap → Appliance ON  
   - Second clap → Appliance OFF  
3. Relay switches the connected device accordingly.  
4. Debounce logic ensures only one trigger per clap.  

---

## 💻 Usage Instructions  
1. Connect the microphone sensor and relay module as per wiring table.  
2. Upload the Arduino sketch `Smart_Switch.ino` to the board.  
3. Connect your appliance (e.g., lamp/fan) to the relay module.  
4. Clap or make a loud sound near the microphone sensor.  
5. Watch your appliance turn ON/OFF with each clap! 🎉  

---

## 🚀 Future Improvements  
- Add **double-clap detection** to avoid false triggers.  
- Use **multiple relays** for controlling different appliances.  
- Integrate with **Wi-Fi (ESP8266/ESP32)** for IoT smart home.  
- Add **mobile app control** alongside clap control.  

---
