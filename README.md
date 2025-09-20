
# Mini Security System

![Arduino](https://img.shields.io/badge/Platform-Arduino-blue)
![Language](https://img.shields.io/badge/Language-C%2B%2B-green)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)

---

## 🚀 Project Overview

**Mini Security System** is an Arduino-based motion detection project that uses a PIR sensor to trigger a visual and audio alert. When motion is detected, the system turns on an LED and activates a buzzer, making it a simple but effective entry-level security solution.

---

## 🛠 Components Used

* **Arduino Uno**
* **PIR Motion Sensor** (for motion detection)
* **LED** + 220Ω resistor (visual indicator)
* **Buzzer** (audio alert)
* Breadboard & jumper wires

---

## 🔌 Circuit Wiring

| Component      | Arduino Pin             |
| -------------- | ----------------------- |
| PIR Sensor OUT | D13                     |
| PIR Sensor VCC | 5V                      |
| PIR Sensor GND | GND                     |
| LED (+)        | D7                      |
| LED (-)        | GND (via 220Ω resistor) |
| Buzzer (+)     | D8                      |
| Buzzer (-)     | GND                     |

📷 **Circuit Diagram:**
## 📷 Circuit Diagram

![Mini Security System Circuit](MINI%20SECURITY%20SYSTEM.png)


---

## 💻 Code

```cpp
int ledPin = 7;
int buzzerPin = 8;
int pirPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(pirPin, INPUT);
}

void loop() {
  int motion = digitalRead(pirPin);

  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);    // LED ON
    digitalWrite(buzzerPin, HIGH); // Buzzer ON
  } else {
    digitalWrite(ledPin, LOW);     // LED OFF
    digitalWrite(buzzerPin, LOW);  // Buzzer OFF
  }
}
```

---

## ✅ Features

* Detects motion using PIR sensor
* Lights up an LED as a visual alert
* Activates buzzer as an audio alert
* Simple and beginner-friendly project

---


---

## 🔧 Future Enhancements

* Add night mode with LDR (only active in darkness)
* Adjustable timer for LED/buzzer duration
* Multiple PIR sensors for multi-zone security
* Blinking LED patterns for warning mode

---

## 📂 How to Use

1. Connect components as shown in the wiring table.
2. Upload the Arduino code.
3. Power the Arduino.
4. Move in front of the PIR sensor — LED lights up & buzzer sounds.
