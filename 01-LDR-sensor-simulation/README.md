
# Arduino LDR Sensor Simulation

## Project Overview
This is a beginner Arduino project that reads light sensor values using an LDR (Light Dependent Resistor).

## Tools Used
- Arduino Uno
- SimulIDE 1.10
- Arduino IDE

## Components
- Arduino Uno
- LDR sensor
- Resistor

## How It Works
The Arduino reads the analog signal from pin A0 using `analogRead()`. The sensor reading is printed in the Serial Monitor every 500 milliseconds.

## Arduino Code
The source code is available in `LDR_Sensor.ino`.

## Simulation
The project was tested in SimulIDE 1.10. A screenshot of the simulation is included in `simulation.png`.

## What I Learned
- Reading analog input with `analogRead()`
- Using `Serial.begin()`
- Displaying readings with `Serial.println()`
- Simulating an Arduino circuit

## Status
Beginner project completed.
