# Control 8 Relay

## Description

The Control 8 Relay project enables the control of 8 relays through a serial interface. This allows you to turn on or off each relay using specific commands sent via the serial port. This setup is useful for automating tasks or controlling multiple devices with an Arduino.

## Components

- Arduino (e.g., Arduino Uno)
- 8-Channel Relay Module
- Jumper Wires
- Breadboard (optional)
- Computer with Serial Monitor

## Pin Configuration

| Relay   | Pin Number |
| ------- | ---------- |
| Relay 1 | 2          |
| Relay 2 | 3          |
| Relay 3 | 4          |
| Relay 4 | 5          |
| Relay 5 | 6          |
| Relay 6 | 7          |
| Relay 7 | 8          |
| Relay 8 | 9          |

## Code

```cpp
// Code for Control 8 Relay

#define RL1 2  // Relay 1 control pin
#define RL2 3  // Relay 2 control pin
#define RL3 4  // Relay 3 control pin
#define RL4 5  // Relay 4 control pin
#define RL5 6  // Relay 5 control pin
#define RL6 7  // Relay 6 control pin
#define RL7 8  // Relay 7 control pin
#define RL8 9  // Relay 8 control pin

byte in_serial, str;

void setup(){
  pinMode(RL1, OUTPUT);
  pinMode(RL2, OUTPUT);
  pinMode(RL3, OUTPUT);
  pinMode(RL4, OUTPUT);
  pinMode(RL5, OUTPUT);
  pinMode(RL6, OUTPUT);
  pinMode(RL7, OUTPUT);
  pinMode(RL8, OUTPUT);

  Serial.begin(9600);
  Serial.println("Kontrol Relay via PC");
}

void loop(){
  if (Serial.available() > 0) {
    in_serial = Serial.read(); // Read serial input
    str = char(in_serial);     // Convert to character
    switch (str) {
      case '1': digitalWrite(RL1, HIGH); break; // Relay 1 ON
      case '2': digitalWrite(RL2, HIGH); break; // Relay 2 ON
      case '3': digitalWrite(RL3, HIGH); break; // Relay 3 ON
      case '4': digitalWrite(RL4, HIGH); break; // Relay 4 ON
      case '5': digitalWrite(RL5, HIGH); break; // Relay 5 ON
      case '6': digitalWrite(RL6, HIGH); break; // Relay 6 ON
      case '7': digitalWrite(RL7, HIGH); break; // Relay 7 ON
      case '8': digitalWrite(RL8, HIGH); break; // Relay 8 ON
      case 'a': digitalWrite(RL1, LOW); break;  // Relay 1 OFF
      case 'b': digitalWrite(RL2, LOW); break;  // Relay 2 OFF
      case 'c': digitalWrite(RL3, LOW); break;  // Relay 3 OFF
      case 'd': digitalWrite(RL4, LOW); break;  // Relay 4 OFF
      case 'e': digitalWrite(RL5, LOW); break;  // Relay 5 OFF
      case 'f': digitalWrite(RL6, LOW); break;  // Relay 6 OFF
      case 'g': digitalWrite(RL7, LOW); break;  // Relay 7 OFF
      case 'h': digitalWrite(RL8, LOW); break;  // Relay 8 OFF
    }
  }
}
```

## How It Works

1. Initialization:
   - The setup() function configures the relay pins as outputs and initializes serial communication at 9600 baud rate.
   - A welcome message is printed to the serial monitor.
2. Relay Control:
   - The loop() function continuously checks for incoming serial data.
   - Based on the received command, the corresponding relay is turned on or off.
     - Commands '1' through '8' turn relays 1 through 8 on.
     - Commands 'a' through 'h' turn relays 1 through 8 off.

## Usage

1. Connect the relay module to the Arduino using the specified pin configuration.
2. Open the Serial Monitor in the Arduino IDE and set the baud rate to 9600.
3. Send commands (1-8 for ON, a-h for OFF) to control the relays.

## Notes

- Ensure that the relay module is rated for the voltage and current of the devices you plan to control.
- The serial commands should be sent as individual characters (not as strings).
