# Grade9-Automatic-Night-Light

Automatic Night Light system using Arduino Uno and a photoresistor (LDR).

## Input – Process – Output

| Stage     | Description                                      |
|-----------|--------------------------------------------------|
| **Input** | Analog light level from photoresistor (AO → A0) |
| **Process** | `analogRead(A0)` → if value > 600 → dark       |
| **Output** | LED on pin 8 turns ON when dark, OFF when bright |

## How it works
- The photoresistor resistance increases in the dark.
- In Wokwi this produces a higher analog reading when it is dark.
- Threshold of **600** was used.
- LED turns **ON** only when the reading is greater than 600.

## Circuit Connections
- LDR VCC → 5V  
- LDR GND → GND  
- LDR AO  → A0  
- LED anode (+) → Pin 8 (through 220Ω resistor)  
- LED cathode (−) → GND  

## Wokwi Simulation
[Open the simulation here](https://wokwi.com/projects/479265121665105921)

## Test Readings
| Analog Reading | Expected LED | Observed LED |
|----------------|--------------|--------------|
| 300            | OFF          | OFF          |
| 600            | OFF          | OFF          |
| 750            | ON           | ON           |
