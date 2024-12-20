REGISTER LEVEL PROGRAMMING

This repository contains various projects demonstrating register-level programming on Arduino. Register-level programming gives you more direct control over the microcontroller's hardware by interacting with its registers, rather than relying on high-level libraries. This approach allows you to write more efficient and optimized code, allows you to configure and control peripherals like GPIO pins, timers, serial communication, and interrupts using the microcontroller's registers. which is particularly useful in embedded systems where resources are limited.

Projects in This Repository
This repository contains the following projects that showcase various aspects of register-level programming in Arduino:
1. DELAY FUNCTION HEADER FILE
   A custom delay function implemented using hardware timers, providing more accurate and efficient delays compared to the delay() function provided by the Arduino core. This implementation directly interacts with 
   the microcontroller’s timer registers to create precise delays using Timer/Counter registers, precise timing without blocking other processes.

2. LED BLINKING
   A basic project to blink an LED using register-level programming. The project configures a digital pin as an output, manipulates its state, and toggles the LED on and off at regular intervals using direct 
   register manipulation.

3. LED BLINKING USING TOUCH SENSOR
   An enhancement of the LED blinking project where an LED is toggled based on input from a capacitive touch sensor. The touch sensor is used to detect a touch event, and the program toggles the LED accordingly. 
   This project demonstrates how to interface a touch sensor and use register-level programming to handle digital input and control output.
   Key Concepts: Touch sensor interfacing, digital input reading using registers, conditional LED control based on input.

4. USART COMMUNICATION
    A project that demonstrates serial communication between the Arduino and a PC or another device using the USART (Universal Synchronous and Asynchronous serial Receiver and Transmitter). This project involves 
    sending and receiving data via the USART module by directly manipulating the UART control and status registers.
    Key Concepts: USART configuration, baud rate calculation, data transmission and reception using UART registers, serial communication without using Arduino's Serial library.
   
