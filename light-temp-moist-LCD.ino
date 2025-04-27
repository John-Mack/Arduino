#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define contra 9
#define bri 10

int moisture = 0;

int Photo_Pin = A0;
int readPhoto;
int lightPercentage;
int moistPercentage;


int celsius = 0;

void setup() {
  pinMode(Photo_Pin, INPUT);
  Serial.begin(9600);
  
  pinMode(A1, OUTPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  
  lcd.begin(16, 2); 
  pinMode(contra, OUTPUT);
  pinMode(bri, OUTPUT);
  digitalWrite(contra, LOW); 
  analogWrite(bri, 255);

  lcd.setCursor(0, 0);
  lcd.print("Smart Plant");
  lcd.setCursor(0, 1);
  lcd.print("Prototype");
    delay(5000);
  lcd.setCursor(0, 1);
  lcd.print("                ");      // delete LCD current display
  lcd.setCursor(0, 0);
  lcd.print("                ");
 
}




void loop() {
  
  
  
  
  digitalWrite(A1, HIGH);
   delay(10);
  moisture = analogRead(A2);
  moistPercentage =  ((float)moisture * 100) / 872;
  // Turn off the sensor to reduce metal corrosion over time
  lcd.setCursor(0, 1);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  lcd.print("Moisture:");              // Moisture
  lcd.setCursor(9, 1);
  lcd.print(moistPercentage);
  lcd.setCursor(11, 1);
   lcd.print("%");
  digitalWrite(A1, LOW);
  
  
  readPhoto = analogRead(Photo_Pin);
  lightPercentage = ((float)readPhoto / 942) * 100;
  lcd.setCursor(0, 0);
  lcd.print("Light:");
  lcd.setCursor(6, 0);
  lcd.print(lightPercentage);          // Light
  lcd.setCursor(8, 0);
  lcd.print("%");
  delay(2500);
  
  
  lcd.setCursor(0, 1);
  lcd.print("                ");      // delete LCD current display
  lcd.setCursor(0, 0);
  lcd.print("                ");
  
  
  celsius = map(((analogRead(A3) - 20) * 3.04), 0, 1023, -40, 125);
  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.setCursor(5, 0);
  lcd.print(celsius);                 // Temperature
  lcd.setCursor(7, 0);
  lcd.print("C");
  lcd.setCursor(0, 1);
  delay(2500);
  
  
  							  // Put in Humidity sensor (it would probably fit in the code of the sensor i got at home)
  
  
lcd.setCursor(0, 1);
  lcd.print("                ");      // delete LCD current display
  lcd.setCursor(0, 0);
  lcd.print("                ");
}
