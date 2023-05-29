# UPDATED-and-IMPROVED-LED-Binary-Counter-0--31
This program is an updated and improved version of LED Binary Counter. That counted from 0 - 15. The script now includes 5 switches enabling the
counter to count from 0 - 31. Syntax was also improved, removing many if/elif statements and replaced with switch statements
and ternary operators to look cleaner and actually made it run better. Previous version had slight delay when turning off the LED, this
program can turn them all off simultaniously and incrament at a much smoother motion.

## Circuit Description

The circuit consists of an Arduino board, LEDs, resistors, and a breadboard. Here's how the circuit is wired:

1. Connect the voltage (VCC) pin of the Arduino to the positive rail of the breadboard.
2. Connect the ground (GND) pin of the Arduino to the negative rail of the breadboard.
3. Connect a leg of a resistor to the positive rail of the breadboard.
4. Connect the large leg of an LED to the other leg of the resistor.
5. Connect a ground (GND) pin of the Arduino to the small leg of the LED.

The LEDs will light up based on the current number being iterated through the list of binary numbers. When a binary digit is '1', the corresponding LED will turn on, and when it's '0', the LED will turn off.

## Code Explanation

The Arduino code is responsible for counting from 0 to 31 and controlling the LEDs. Here are the main components of the code:

- The `binaryList` array stores the binary numbers from 0 to 31 as strings.
- The `setup()` function initializes the serial communication and sets the pin modes for the LEDs.
- The `loop()` function is the main code that runs repeatedly.
- The `display` flag is used to indicate when to display the lights.
- The code iterates through the `binaryList` array and turns on/off the LEDs based on the current binary number.
- The `delay(1000)` function is used to display the corresponding binary number for one second.

## Getting Started

To get started with this project, follow these steps:

1. Set up the circuit as described in the "Circuit Description" section.
2. Upload the Arduino code to your Arduino board.
3. Open the serial monitor to view the console logs.
4. Observe how the LEDs light up according to the binary numbers being counted.

Feel free to modify the code and experiment with different LED configurations or binary patterns.

## Youtube Video Link
[![Link to YouTube Video](https://i9.ytimg.com/vi_webp/E0p-PWQM2MM/mq2.webp?sqp=CPCE0KMG-oaymwEmCMACELQB8quKqQMa8AEB-AH-CYAC0AWKAgwIABABGGUgVShEMA8=&rs=AOn4CLDw6oSc-vRd-bIO4sNm5oHLuNc9dA)](https://youtu.be/E0p-PWQM2MM)
