#include <LiquidCrystal.h>  // Include the LCD library

// LCD pin configuration
const int lcdPinRS = 12;
const int lcdPinEN = 11;
const int lcdPinD4 = 5;
const int lcdPinD5 = 4;
const int lcdPinD6 = 3;
const int lcdPinD7 = 2;

// Initialize the LCD
LiquidCrystal lcd(lcdPinRS, lcdPinEN, lcdPinD4, lcdPinD5, lcdPinD6, lcdPinD7);

// Temperature sensor pin
const int tempPin = A0;

// LED pin
const int ledPin = 13;

// Temperature threshold
const float tempThreshold = 30.0;  // Temperature threshold in degrees Celsius

void setup() {
  // Start serial communication
  Serial.begin(9600);

  // Set up the LCD
  lcd.begin(16, 2);
  lcd.print("Temp: ");

  // Set LED pin as output
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  // Read temperature from the sensor
  int sensorValue = analogRead(tempPin);
  
  // Convert the analog reading to temperature (assuming LM35 sensor)
  float voltage = sensorValue * (5.0 / 1023.0);  // Convert to voltage
  float temperatureC = voltage * 100.0;          // Convert voltage to temperature

  // Display temperature on LCD
  lcd.setCursor(6, 0);
  lcd.print(temperatureC);
  lcd.print(" C   ");  // Extra spaces to clear previous readings
  
  // Print temperature to Serial Monitor for debugging
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" C");

  // Check if temperature exceeds the threshold
  if (temperatureC > tempThreshold) {
    digitalWrite(ledPin, HIGH);  // Turn on LED if threshold exceeded
  } else {
    digitalWrite(ledPin, LOW);   // Turn off LED if below threshold
  }

  // Delay before the next loop iteration
  delay(1000);  // Delay for 1 second
}
