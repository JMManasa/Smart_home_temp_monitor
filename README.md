# 🌡️ Smart Home Temperature Monitor (C Project)

## 📌 Project Overview
This project simulates a **smart home temperature monitoring system** using C.  
It reads temperature data (simulated sensor), applies **control logic** (Fan/Heater ON), and logs the results into a file.  

This is designed as a **simple but effective embedded/IoT-style project** for learning and showcasing skills to companies like **Zentree Labs**.



## 🚀 Features
- Simulates sensor readings (10°C–30°C)
- Applies control logic:
  - If temperature > 30°C → Fan ON
  - If temperature < 18°C → Heater ON
  - Else → Normal
- Saves results in `temperature_log.txt`
- Menu-driven (Start/Exit)


## 🖥️ Sample Output
Temperature: 17°C -> Heater ON
Temperature: 19°C -> Normal
Temperature: 29°C -> Normal
Temperature: 11°C -> Heater ON
Temperature: 29°C -> Normal
Temperature: 13°C -> Heater ON
Temperature: 10°C -> Heater ON
Temperature: 29°C -> Normal
Temperature: 25°C -> Normal
Temperature: 18°C -> Normal
Temperature: 11°C -> Heater ON
Temperature: 13°C -> Heater ON
Temperature: 13°C -> Heater ON
Temperature: 18°C -> Normal
Temperature: 12°C -> Heater ON
Temperature: 29°C -> Normal
Temperature: 19°C -> Normal
Temperature: 10°C -> Heater ON
Temperature: 26°C -> Normal
Temperature: 24°C -> Normal
