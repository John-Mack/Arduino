#include <LiquidCrystal.h> // Import the LCD library


// Initialize the LCD library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


#define BRIGHTNESS_PIN 9


// Define custom character for the degree symbol
byte degreeSymbol[8] = {
  B00100,
  B10110,
  B11010,
  B01000,
  B00000,
  B00001,
  B10010,
  B01100
};
int seconds = 0;
void setup() {
  Serial.begin(9600); // Initialize serial communication
  lcd.begin(16, 2); // Initialize the LCD as a 16x2 display

  pinMode(BRIGHTNESS_PIN, OUTPUT); // Set brightness pin to output
  analogWrite(BRIGHTNESS_PIN, 80); // Set brightness level



  // Create the custom character for the degree symbol
  lcd.createChar(0, degreeSymbol);
}

void loop() {

  lcd.begin(16, 2);

lcd.setCursor(0, 0);
  // print the number of seconds since reset:
  lcd.print(seconds);
  lcd.print("$");
  lcd.write(byte(0));
    delay(1000);
  seconds += 72;
  lcd.clear();




}
