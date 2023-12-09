#include <Adafruit_NeoPixel.h>

#define PIN 2
#define NUMPIXELS 50
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  // put your setup code here, to run once:
pixels.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
pixels.clear();

pixels.fill(pixels.Color(255,0,0), 0,50 );
for (int i=0; i<NUMPIXELS; i++){
  pixels.setPixelColor(i,pixels.Color(0,255,0));
  pixels.setPixelColor(i-1,pixels.Color(255,0,0));
  pixels.show();
  delay(200); 
}
for (int i=0; i<NUMPIXELS; i++){
  pixels.setPixelColor(i,pixels.Color(255,0,255));
  pixels.show();
  delay(200); 
}

delay(2000);

pixels.clear();
pixels.rainbow(0,3,255,255,true);
pixels.show();
delay(2000);
pixels.clear();
for (int bright=255; bright>0; bright--){
  pixels.rainbow(0,3,255,bright,true);
  pixels.show();
  delay(15);  
}  

}
