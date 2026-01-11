# Line Following Robot (LFR) – DUETECH'25 🤖

This repository contains the Arduino code and project details for a **5-sensor Line Following Robot (LFR)** developed for the **DUETECH'25 Robotics Competition**.

## 🔧 Project Overview
The robot follows a black line on a white surface using **five IR sensors** and adjusts motor speed dynamically to handle straight paths, curves, sharp 90° turns, and circular tracks.

## ⚙️ Hardware Components
- Arduino 
- 5 IR Sensors (Far Left, Left, Center, Right, Far Right)
- DC Geared Motors
- Motor Driver Module
- Battery Pack
- Chassis

## 🧠 Working Logic
- **Center sensor** keeps the robot moving forward
- **Left & Right sensors** handle smooth corrections
- **Far Left & Far Right sensors** handle sharp turns
- Differential motor speed control is used for accuracy

## 🧪 Track Details
- Black line
- Approx. **1.5 inch width**
- Includes sharp turns and circular paths

## 💻 Programming
- Language: Arduino C/C++
- Platform: Arduino IDE

## 📌 Learning Outcome
This project helped in understanding real-world challenges such as sensor tuning, logic optimization, and debugging under competition conditions.

---

📽️ A testing video and project discussion are shared on LinkedIn.
