**Temperature Monitoring System**

Description
The Temperature Monitoring System utilizes an Arduino and a temperature sensor to continuously measure and display ambient temperature on an LCD. This project includes a visual alert through an LED that activates when the temperature exceeds a predefined threshold, making it an effective tool for monitoring environmental conditions.

Components Used
Arduino Board: The microcontroller that processes sensor data and controls the LED and LCD.
LM35 Temperature Sensor: Analog sensor that provides temperature readings in degrees Celsius.
Liquid Crystal Display (LCD): Displays the current temperature readings.
LED: Serves as an indicator that lights up when the temperature exceeds a set limit.
Resistors and Wires: For connections between components.
Functionality
The system continuously reads the temperature from the LM35 sensor connected to an analog pin. The analog reading is converted into a temperature value in degrees Celsius. This value is then displayed on the LCD in real-time, along with a printout to the Serial Monitor for debugging purposes.

Code Overview
The provided code initializes the LCD and sets up the temperature sensor. It includes a loop that reads the sensor value, converts it to a voltage, and subsequently to temperature. If the temperature exceeds the defined threshold (30°C), the LED lights up; otherwise, it remains off.

Conclusion
This Temperature Monitoring System is an excellent demonstration of integrating sensors, displays, and indicators using Arduino. It offers practical applications in various fields, such as environmental monitoring and automated control systems, making it suitable for both beginners and enthusiasts in electronics and programming.
