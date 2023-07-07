# Joystick with Rain Sensor and PWM Fan Control

This repository contains the code for a joystick with a rain sensor on the back and a PWM fan that turns on when the person's hands are wet. The project utilizes an Arduino board to read input from the joystick and rain sensor, and controls a PWM fan accordingly.

## Hardware Requirements
- Arduino board
- Joystick module
- Rain sensor module
- PWM fan

## Circuit Diagram
![Circuit Diagram Rain Sensor](https://images.app.goo.gl/RSTKBPJMKFULxBVX9)

## Installation
1. Clone this repository to your local machine or download the ZIP file.
2. Connect the Arduino board to your computer.
3. Open the Arduino IDE.
4. Open the `joystick_rain_sensor.ino` file from the downloaded repository.
5. Verify and upload the code to the Arduino board.

## Usage
1. Connect the joystick and rain sensor modules to the appropriate pins on the Arduino board as shown in the circuit diagram.
2. Connect the PWM fan to the specified pin (pin 2 in this code).
3. Power on the Arduino board.
4. When the joystick is moved, the analog value of the joystick position is read.
5. If the rain sensor detects moisture (digital value is HIGH), the PWM fan turns on.
6. If the rain sensor does not detect moisture (digital value is LOW) or the joystick position value is above a threshold of 900, the fan remains off.

Note: Make sure to adjust the threshold value (900 in this code) according to your specific requirements.

## Contributions
Contributions to this project are welcome. If you encounter any issues or have suggestions for improvements, please feel free to submit a pull request or open an issue in the repository.

## License
This project is licensed under the [MIT License](LICENSE).
