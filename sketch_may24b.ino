//This program is designed to count from 0 to 15 in Binary. Voltage is provided by the pins on the Arduino
//and the current flows towards a resistor, then the LED lights, then towards the ground and back creating a circuit.
//The LEDs will turn on based on the current number iterated through the list of 0 - 15. Program created to help learn more about 
//Arduino. Please note that through each iteration, each value corresponding to 1 will have a light flicker on, and when 0 flickers off.
//The ones currently on will be displayed for one second, and any lights corresponding to 0 will turn off in order creating a slight delay 
//as all lights are not turned off at the same time.

// Define size of list
const int binaryListSize = 32;

//declare an array to hold the list values
String binaryList[binaryListSize];

void setup() {
  // put your setup code here, to run once:

  // Serial Communication set up to provide interface for console logs
  // 9600 Baud is the speed at which data is transmitted over a serial comm. channel.
  Serial.begin(9600);

  //initialize values to list
  binaryList[0] = "00000";
  binaryList[1] = "00001";
  binaryList[2] = "00010";
  binaryList[3] = "00011";
  binaryList[4] = "00100";
  binaryList[5] = "00101";
  binaryList[6] = "00110";
  binaryList[7] = "00111";
  binaryList[8] = "01000";
  binaryList[9] = "01001";
  binaryList[10] = "01010";
  binaryList[11] = "01011";
  binaryList[12] = "01100";
  binaryList[13] = "01101";
  binaryList[14] = "01110";
  binaryList[15] = "01111";
  binaryList[16] = "10000";
  binaryList[17] = "10001";
  binaryList[18] = "10010";
  binaryList[19] = "10011";
  binaryList[20] = "10100";
  binaryList[21] = "10101";
  binaryList[22] = "10110";
  binaryList[23] = "10111";
  binaryList[24] = "11000";
  binaryList[25] = "11001";
  binaryList[26] = "11010";
  binaryList[27] = "11011";
  binaryList[28] = "11100";
  binaryList[29] = "11101";
  binaryList[30] = "11110";
  binaryList[31] = "11111";
  
  //initialize pin modes
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //loop through binary number list to iterate over... Based on position, values will be iterated over
  for (int i = 0; i < binaryListSize; i++) {
    //assign current number value as the binary list position
    String currentNumber = binaryList[i];
    //Debug, find which position and value script is on
    Serial.println("Index Position: " + String(i));
    Serial.println("Value: " + String(binaryList[i]));

    // Start with all pins off
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);

    // Iterate through current number and based on value, turn an LED On or Off
    for (int y = 0; y < currentNumber.length(); y++) {
      // Digit will contain one char at a time and loop through the 4 digits
      char digit = currentNumber.charAt(y);
      
      // Logic for LED on or off
      switch (y) {
        case 0:
          digitalWrite(13, (digit == '1') ? HIGH : LOW);
          break;
        case 1:
          digitalWrite(12, (digit == '1') ? HIGH : LOW);
          break;
        case 2:
          digitalWrite(11, (digit == '1') ? HIGH : LOW);
          break;
        case 3:
          digitalWrite(10, (digit == '1') ? HIGH : LOW);
          break;
        case 4:
          digitalWrite(9, (digit == '1') ? HIGH : LOW);
          break;
        default:
          break;
      }
    }

    delay(1000); // Display the current LED state for one second

    // Turn off all LEDs
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }
}
