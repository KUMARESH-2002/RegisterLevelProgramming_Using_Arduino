REGISTER LEVEL PROGRAMMING

This repository contains various projects demonstrating register-level programming on Arduino. Register-level programming gives you more direct control over the microcontroller's hardware by interacting with its registers, rather than relying on high-level libraries. This approach allows you to write more efficient and optimized code, allows you to configure and control peripherals like GPIO pins, timers, serial communication, and interrupts using the microcontroller's registers. which is particularly useful in embedded systems where resources are limited.

Projects in This Repository
This repository contains the following projects that showcase various aspects of register-level programming in Arduino:

1. DELAY FUNCTION HEADER FILE

   A custom delay function implemented using hardware timers, providing more accurate and efficient delays compared to the delay() function provided by the Arduino core. This implementation directly interacts 
   with 
   the microcontroller’s timer registers to create precise delays using Timer/Counter registers, precise timing without blocking other processes.

2. LED BLINKING

   A basic project to blink an LED using register-level programming. The project configures a digital pin as an output, manipulates its state, and toggles the LED on and off at regular intervals using direct 
   register manipulation.

3. LED BLINKING USING TOUCH SENSOR

   An enhancement of the LED blinking project where an LED is toggled based on input from a capacitive touch sensor. The touch sensor is used to detect a touch event, and the program toggles the LED accordingly. 
   This project demonstrates how to interface a touch sensor and use register-level programming to handle digital input and control output.
   Key Concepts: Touch sensor interfacing, digital input reading using registers, conditional LED control based on input.

4. USART COMMUNICATION

    A project that demonstrates serial communication between the Arduino and a PC or another device using the USART (Universal Synchronous and Asynchronous serial 
    Receiver and Transmitter). This project involves 
    sending and receiving data via the USART module by directly manipulating the UART control and status registers.
    Key Concepts: USART configuration, baud rate calculation, data transmission and reception using UART registers, serial communication without using Arduino's 
    Serial library.

5. I2C Using Register-Level Programming

   This Project demonstrates I2C communication through register-level programming, where you directly manipulate the hardware registers to communicate with I2C 
   devices.
   I2C (Inter-Integrated Circuit) is a popular serial communication protocol used to connect microcontrollers with peripheral devices like sensors, EEPROMs, and 
   LCD displays. In register-level programming, you 
   bypass high-level libraries and interact directly with the microcontroller's hardware registers for sending and receiving data.

6. LCD HD44780

   This Project explains interfacing HD44780 LCD using register-level programming. The HD44780 is a widely used character LCD controller, and register-level programming gives you fine-grained control over its operations by directly manipulating its control and data pins.

   The HD44780 LCD module operates in two modes: command mode and data mode. It is controlled using several pins:

   RS (Register Select): Determines whether you are sending a command (RS = 0) or data (RS = 1).

   RW (Read/Write): Controls the direction of data flow; 0 for write, 1 for read.

   E (Enable): Latches the data from the data pins into the LCD controller on a rising edge.

   Data Pins (D0-D7): Used to send command or data bytes to the LCD. For 8-bit mode, all 8 data pins are used; for 4-bit mode, only the upper 4 data pins (D4-D7) 
   are used

   Register-level programming for the HD44780 LCD gives you full control over the display, allowing you to interface directly with the hardware. By manipulating 
   the RS, RW, and E control pins and sending data through the data pins (D0-D7), you can send both commands and data to the LCD.
