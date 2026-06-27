# 💧 **Water Level Detector using Arduino**  

This project is a **simple and effective Water Level Detection System** using an **Arduino Uno**, a **water level sensor module**, an **LED**, and a **buzzer**. It monitors water levels and provides **visual and audible alerts**, making it useful for **water tank monitoring, overflow prevention, and smart water management**.  

---

## 🛠️ **Components Used**
- 🔹 **Arduino Uno** – Microcontroller that processes sensor data and controls outputs.  
- 🔹 **Water Level Sensor Module** – Detects water level and sends an analog signal to the Arduino.  
- 🔹 **LED (+ ~220–330 Ω resistor)** – Visual indication when water reaches a set level.  
- 🔹 **Buzzer** – Audible alert when water is about to overflow.  

---

## 🔌 **Wiring**
| Arduino Pin | Connects to |
|-------------|-------------|
| A0 | Water sensor **signal** (sensor VCC → 5V, GND → GND) |
| D7 | LED **+** via a ~220–330 Ω resistor (LED − → GND) |
| D8 | Buzzer **+** (buzzer − → GND) |

> The thresholds (LED ≈ 500, buzzer ≈ 800, each with a small **hysteresis band** to stop flicker) are **uncalibrated** — tune `LED_ON/LED_OFF` and `BUZZER_ON/BUZZER_OFF` in the sketch for your sensor.
>
> 💡 *Resistive water sensors corrode when powered continuously. For long-term use, drive the sensor's VCC from a spare digital pin and energise it only while taking a reading.*

---

## ⚙️ **How It Works**
1️⃣ The **water level sensor** sends an analog signal that rises with the water level.  
2️⃣ When the level passes the LED threshold, the **Arduino turns ON the LED**.  
3️⃣ At the higher overflow threshold, the **buzzer activates** to alert the user.  
4️⃣ Hysteresis keeps the outputs steady, and the system **resets automatically** as the level drops back down.  

---

## 📝 **Features**
✅ **Monitors water levels** using a sensor module  
✅ **Turns ON an LED** when water reaches a set level  
✅ **Activates a buzzer** to alert overflow risk  
✅ **Hysteresis prevents output flicker** near a threshold  
✅ **Helps prevent water wastage and overflow**  

---

## 🌍 **Applications**
🔹 **Water Tank Monitoring** – Notifies when water reaches a set level.  
🔹 **Overflow Prevention System** – Alerts users before water overflows.  
🔹 **Smart Irrigation Systems** – Controls water usage efficiently.  
🔹 **Rainwater Harvesting Automation** – Helps in managing stored rainwater.  
🔹 **Industrial Water Level Monitoring** – Ensures optimal water levels in tanks.  
🔹 **Aquarium Water Level Alert** – Prevents overflow or low water conditions.  
