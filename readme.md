# 🔊 Smart Sound-Absorbing Panel

> **Adaptive Indoor Noise Detection & Sound Absorption System**  
> Arduino-based project using a **KY-038 sound sensor** and **relay control** to detect loud sounds.

---

## ❓ Why This Project

Indoor noise can affect homes, offices, classrooms, and recording spaces.

This project combines **sound-absorbing materials** with an **Arduino-based detection system** to provide a low-cost approach to indoor noise control.

---

## 🔧 Key Features

- Arduino Uno-based sound detection
- KY-038 sound sensor
- Relay-controlled output
- Modular sound-absorbing panel
- Hinged panel extension concept
- Acoustic foam, acoustic panels, and MLV
- 70 dB project threshold

---

## 🗂 File Structure

```text
Smart-Sound-Absorbing-Panel/
│
├── smart_sound_panel.ino
├── README.md
└── Smart Sound-Absorbing Panel Report.pdf
smart_sound_panel.ino → Arduino code for sound detection and relay control.
README.md → Project information and documentation.
Smart Sound-Absorbing Panel Report.pdf → Complete project report.

## 🧰 Components Used
Arduino Uno
KY-038 Sound Sensor
Relay Module
Acoustic Foam / Panel Material
Mass Loaded Vinyl (MLV)
Hinges
LED Bulb
Connecting Wires

## ⚙️ How It Works
The KY-038 monitors surrounding sound.
Arduino reads the sensor output.
When the loud-sound condition is detected, the relay is activated.
The relay can control an external output such as an LED bulb.
The hinged design provides additional sound-absorbing surface area.
Note: The current code uses the KY-038's digital output. The 70 dB value is a project-specified threshold, not a calibrated dB measurement from the sensor.

## 🏠 Applications
Homes
Offices
Classrooms
Recording studios
Content creation space.

## 💻 Technologies Used
Arduino Uno | Embedded C | KY-038 | Relay Control | Acoustic Materials