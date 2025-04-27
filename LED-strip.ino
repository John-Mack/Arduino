#include <Adafruit_NeoPixel.h>

#define PIN 2	 // input pin Neopixel is attached to

#define NUMPIXELS      32 // number of neopixels in strip

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 100; // timing delay in milliseconds
int numPixels = 32;
int r = 0;
int g = 0;
int b = 0;

void setup() {
  // Initialize the NeoPixel library.
  pixels.begin();
}

void loop() {
  bounce();
  activate();
  }

// setColor()
// picks random values to set for RGB
void setColor(){
  r = random(0, 255);
  g = random(0,255);
  b = random(0, 255);
}
void bounce() {

     for( int i = 0; i < 1; i++ ){
  setColor();
     setColor();
     setColor();
     pixels.clear();
  pixels.setPixelColor(0, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(14, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(18, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(28, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(20, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(10, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(6, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(8, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(22, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(26, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(20, r, g, b );
pixels.show();
  delay(250);
  pixels.clear();
  pixels.setPixelColor(12, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(2, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(14, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(16, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(30, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(18, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(12, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(4, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(10, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(22, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  pixels.setPixelColor(24, r, g, b );
pixels.show();
  delay(250);
    pixels.clear();
  }
  }
void activate() {
  for( int i = 0; i < 2; i++ ){
   setColor();
    for( int i = 0; i < numPixels; i++ ) {
       pixels.setPixelColor(i, r, i*4, b );
      delay(100);
      pixels.show();
    }
     } 
  pixels.show();
  
}
