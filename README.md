# Smart Irrigation System Based on Soil Moisture

Academic project developed as part of the **Electrical and Electronic Measurements** course at the **Universidad Autónoma del Estado de Morelos (UAEM)**.

The project consists of the design and simulation of an automated irrigation system that monitors soil-moisture conditions and activates a water pump when the moisture level falls below a defined threshold.

## Project Objective

Design, simulate, and document an automatic irrigation system using **Arduino UNO** and **Tinkercad**, with a control algorithm that regulates watering according to soil-moisture conditions.

## How It Works

1. A soil-moisture sensor is represented in the simulation by a potentiometer.
2. Arduino reads the analog input and converts it into a moisture percentage.
3. The program compares the measured value with a predefined moisture threshold.
4. If the soil is too dry, Arduino activates a DC motor that represents the water pump.
5. Irrigation duration is adjusted according to the detected moisture deficit.

## Technologies and Components

- Arduino UNO R3
- C/C++ (Arduino)
- Tinkercad
- Soil-moisture sensor / potentiometer
- DC motor / water pump
- TIP120 transistor or IRLZ44N MOSFET
- 1N4007 diode
- Breadboard and supporting electronic components

## Main Features

- Soil-moisture monitoring
- Threshold-based automatic irrigation
- Pump control through Arduino
- Irrigation time proportional to moisture deficit
- Electronic component selection for future physical implementation
- Simulation and electrical measurements in Tinkercad

## Repository Structure

```text
Smart-Irrigation-System/
├── README.md
├── src/
│   └── smart_irrigation.ino        # Arduino source code (coming next)
└── images/                         # Circuit and simulation images (coming next)
```

## Project Status

The system was successfully designed and simulated in **Tinkercad** as an academic prototype. The project documentation also includes the selection of equivalent physical components for a possible future implementation.

## Future Improvements

- Build the physical prototype
- Replace the simulated potentiometer with a capacitive soil-moisture sensor
- Add real-time monitoring and data logging
- Implement a display or wireless interface
- Improve calibration for different plants and soil conditions

## Author

**Yoltzin Daniel Figueroa Urzua**  
Electrical-Electronic Engineering Student  
Universidad Autónoma del Estado de Morelos (UAEM)

> This repository presents the technical work developed for academic and portfolio purposes.
