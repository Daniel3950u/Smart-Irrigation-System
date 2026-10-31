# Smart Irrigation System

Academic team project for Electrical and Electronic Measurements at Universidad Autónoma del Estado de Morelos (UAEM), 2025. Yoltzin Daniel Figueroa Urzua participated as a team member.

## Scope

Arduino UNO simulation in Tinkercad for an irrigation controller for basil. A potentiometer on A0 represents soil moisture and a transistor-driven DC motor on pin 8 represents the pump. The report documents simulated measurements and candidate parts for future physical implementation.

## Code and operation

Open `src/smart_irrigation/smart_irrigation.ino` in the Arduino IDE and select Arduino UNO. This portfolio sketch is adapted from the academic report, preserving its logic with simplified formatting and equivalent conditionals.

- Simulated moisture: integer mapping of ADC values 0–1023 to 0–100.
- Trigger: moisture at or below 30%, after the waiting interval.
- Reference moisture: 60%.
- Watering duration: 3000 ms + 300 ms per percentage point of deficit.
- Minimum wait after watering: 30000 ms. The first watering also waits 30 seconds after startup.
- Serial monitor: 9600 baud. Sampling delay: 200 ms.

At 20% simulated moisture, calculated duration is 15000 ms. This is a reference calculation, not a new measurement.

## Limitations

The potentiometer percentage is not calibrated soil moisture. Watering time is an open-loop estimate, not a guarantee that moisture reaches 60%. A physical pump needs a suitable driver, power supply, common ground and flyback protection. The report proposes TIP120 or IRLZ44N and 1N4007; component suitability and sensor calibration require verification for a real build.

The original project was simulated in Tinkercad. This portfolio revision was reviewed statically; Arduino compilation and a new simulation were not performed during publication. Physical deployment and water savings are not claimed.
