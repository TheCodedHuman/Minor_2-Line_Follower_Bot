<p align="center">
  <img src="Media/banner.png" alt="Project Banner" width="100%">
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Status-Working-brightgreen" />
  &nbsp;&nbsp;
  <img src="https://img.shields.io/github/commits-since/TheCodedHuman/Minor-2_Line-Follower-Bot/latest" />
  &nbsp;&nbsp;
  <img src="https://img.shields.io/badge/Team-4%20Members-blueviolet" />
  &nbsp;&nbsp;
  <img src="https://img.shields.io/badge/Microcontroller-ATmega328-yellowgreen" />
</p>

---

# 📌 Description

Line Follower Bot is an autonomous, sensor-based robot designed to detect and follow a defined path using infrared sensors and microcontroller logic. Built as a hardware-software integration project, it demonstrates real-time decision-making through embedded systems.

<p align="center">
  <img src="Media/demo.gif" alt="Demo GIF" width="80%">
</p>

---

# 🧰 Pre-Requisite

### 📦 Software
- Arduino IDE
- Familiarity with C++

### ⚙️ Hardware
- Arduino UNO R3 (ATmega328 microcontroller)
- USB Type-B Cable (printer style)
- TT Motors (Min: 2, Recommended: 4)
- Toy/Project Wheels
- Jumper Wires
- Motor Driver (Min: L298N, Recommended: L293D)
- Chassis (Cardboard works, R6 chassis recommended 😜)
- IR Sensors (Min: 2 single-channel, Recommended: 5/8-channel)
- Small trailing wheel or ball caster (optional)
- Battery (2× Li-Po 12V minimum — or a whole power station *just kidding* 💀)
- Battery Holder

---

# 🛠️ Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/TheCodedHuman/Minor-2_Line-Follower-Bot.git
   cd Minor-2_Line-Follower-Bot
   ```

2. **Open the Arduino IDE**
   - Open the `.ino` file from the `src/` folder.
   - Connect your Arduino board.

3. **Configure Board & Port**
   - Tools → Board → Arduino Uno
   - Tools → Port → Select correct COM

4. **Upload the code**
   - ✅ Verify
   - ⬆️ Upload

5. **Wiring Setup**
   - IR Sensors → Pins `2`, `3`
   - Motor Driver:
     - Left Motor → Pins `10`, `11`
     - Right Motor → Pins `8`, `9`
     - Enable Pins → `5`, `6`
   - Power via USB or external supply

---

# 🔌 Circuit Diagram

<p align="center">
  <img src="Media/circuit.jpg" alt="Circuit Diagram" width="60%">
</p>

---

# 🖥️ Usage

<p align="center">
  <img src="Media/usage.svg" alt="Usage Preview" width="60%">
</p>

---

# 🧱 Working Model Images

<p align="center">
  <img src="Media/model_side.jpg" alt="Side View" width="60%">
</p>

<p align="center">
  <img src="Media/model_top.jpg" alt="Top View" width="60%">
</p>

---

# 👥 Team Members

- Abhishek Mahto  
- Moksh Mahawar  
- Shabbir Husain  
- Shresth Raghuvanshi

---

# 🎬 Behind the Scenes ;)

⚙️ Fun Fact: This bot may look simple, but getting those IR sensors to *consistently* detect a black line without throwing a tantrum was half the battle. Loose wires, uneven IR thresholds, tape width, and unplanned robot dance routines were all part of the journey 😅

<!-- Placeholder: Add GitHub usernames and commit badge in future -->
