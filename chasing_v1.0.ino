// Simple NeoPixel test.  Lights just a few pixels at a time so a
// 1m strip can safely be powered from Arduino 5V pin.  Arduino
// may nonetheless hiccup when LEDs are first connected and not
// accept code.  So upload code first, unplug USB, connect pixels
// to GND FIRST, then +5V and digital pin 6, then re-plug USB.
// A working strip will show a few pixels moving down the line,
// cycling between red, green and blue.  If you get no response,
// might be connected to wrong end of strip (the end wires, if
// any, are no indication -- look instead for the data direction
// arrows printed on the strip).
 
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define N_LEDS 60
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(30, 10, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(30, 11, NEO_GRB + NEO_KHZ800);

// Constants that won't change: RIGHT SIDE = 1, LEFT SIDE = 2
const int buttonPin1 = 9;    // the pin that the pushbutton is attached to
const int buttonPin2 = 3;     // the other pin that the other pushbutton is attached to

// Variables that will change:
int buttonPushCounter1 = 0;   // counter for the number of button1 presses
int buttonState1 = 0;         // current state of the button1
int lastButtonState1 = 0;     // previous state of the button1

int buttonPushCounter2 = 0;   // counter for the number of button2 presses
int buttonState2 = 0;         // current state of the button2
int lastButtonState2 = 0;     // previous state of the button2



void setup() {
  // initialize the button pin as a input:
    pinMode(buttonPin1, INPUT);  // initialize the right button as an input
    pinMode(buttonPin2, INPUT);  // initialize the left button as an input  
    // initialize serial communication:
    Serial.begin(9600); 
    
    strip1.begin();
    strip2.begin();
}
 

void loop() {

  ////////BUTTON ONE AND STRIP ONE IN THIS CHUNK
// read the pushbutton input pin:
  buttonState1 = digitalRead(buttonPin1);

  // compare the buttonState to its previous state
  if (buttonState1 != lastButtonState1) {
    
    // if the state has changed, increment the counter
    if (buttonState1 == HIGH) {
      
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter1++;
      Serial.println("on");
      Serial.print("number of buttonONE pushes:  ");
      Serial.println(buttonPushCounter1);
      
    } else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
 // save the current state as the last state, for next time through the loop
  lastButtonState1 = buttonState1;

  // turns on the chasing RED LED every two button pushes by
  // checking the modulo of the button push counter. The modulo function gives you the remainder of the division of two numbers: 
  if (buttonPushCounter1 % 2 == 0) {
  } 
  
  else {
    strip1.show();
  }
// // while the button is not pressed, all pixels white:
  while (digitalRead(buttonPin1) == LOW){
    strip1.show();
    strip1.setPixelColor(0, 255, 255,255);
    strip1.setPixelColor(1, 255, 255,255);
    strip1.setPixelColor(2, 255, 255,255);
    strip1.setPixelColor(3, 255, 255,255);
    strip1.setPixelColor(4, 255, 255,255);
    strip1.setPixelColor(5, 255, 255,255);
    strip1.setPixelColor(6, 255, 255,255);
    strip1.setPixelColor(7, 255, 255,255);
    strip1.setPixelColor(8, 255, 255,255);
    strip1.setPixelColor(9, 255, 255,255);
    strip1.setPixelColor(10, 255, 255,255);
    strip1.setPixelColor(11, 255, 255,255);
    strip1.setPixelColor(12, 255, 255,255);
    strip1.setPixelColor(13, 255, 255,255);
    strip1.setPixelColor(14, 255, 255,255);
    strip1.setPixelColor(15, 255, 255,255);
    strip1.setPixelColor(16, 255, 255,255);
    strip1.setPixelColor(17, 255, 255,255);
    strip1.setPixelColor(18, 255, 255,255);
    strip1.setPixelColor(19, 255, 255,255);
    strip1.setPixelColor(20, 255, 255,255);
    strip1.setPixelColor(21, 255, 255,255);
    strip1.setPixelColor(22, 255, 255,255);
    strip1.setPixelColor(23, 255, 255,255);
    strip1.setPixelColor(24, 255, 255,255);
    strip1.setPixelColor(25, 255, 255,255);
    strip1.setPixelColor(26, 255, 255,255);
    strip1.setPixelColor(27, 255, 255,255);
    strip1.setPixelColor(28, 255, 255,255);
    strip1.setPixelColor(29, 255, 255,255);
    strip1.setPixelColor(30, 255, 255,255);
    strip1.setPixelColor(31, 255, 255,255);
    strip1.setPixelColor(32, 255, 255,255);
    strip1.setPixelColor(33, 255, 255,255);
    strip1.setPixelColor(34, 255, 255,255);
    strip1.setPixelColor(35, 255, 255,255);
    strip1.setPixelColor(36, 255, 255,255);
    strip1.setPixelColor(37, 255, 255,255);
    strip1.setPixelColor(38, 255, 255,255);
    strip1.setPixelColor(39, 255, 255,255);
    strip1.setPixelColor(40, 255, 255,255);
    strip1.setPixelColor(41, 255, 255,255);
    strip1.setPixelColor(42, 255, 255,255);
    strip1.setPixelColor(43, 255, 255,255);
    strip1.setPixelColor(44, 255, 255,255);
    strip1.setPixelColor(45, 255, 255,255);
    strip1.setPixelColor(46, 255, 255,255);
    strip1.setPixelColor(47, 255, 255,255);
    strip1.setPixelColor(48, 255, 255,255);
    strip1.setPixelColor(49, 255, 255,255);
    strip1.setPixelColor(50, 255, 255,255);
    strip1.setPixelColor(51, 255, 255,255);
    strip1.setPixelColor(52, 255, 255,255);
    strip1.setPixelColor(53, 255, 255,255);
    strip1.setPixelColor(54, 255, 255,255);
    strip1.setPixelColor(55, 255, 255,255);
    strip1.setPixelColor(56, 255, 255,255);
    strip1.setPixelColor(57, 255, 255,255);
    strip1.setPixelColor(58, 255, 255,255);
    strip1.setPixelColor(59, 255, 255,255);
  }
  while (digitalRead(buttonPin1) == HIGH){
    rainbow1(6);
    chase1(strip1.Color(255, 0, 0)); // Red
    chase1(strip1.Color(255, 0, 0)); // Red
    chase1(strip1.Color(255, 0, 0)); // Red
    chase1(strip1.Color(255, 0, 0)); // Red
    chase1(strip1.Color(255, 0, 0)); // Red
    chase1(strip1.Color(255, 0, 0)); // Red
    chase1(strip1.Color(255, 0, 0)); // Red
  }

  // // while the button is not pressed, all pixels white: returns all pixels to inital value, all white
  while (digitalRead(buttonPin1) == LOW){
    strip1.show();
    strip1.setPixelColor(0, 255, 255,255);
    strip1.setPixelColor(1, 255, 255,255);
    strip1.setPixelColor(2, 255, 255,255);
    strip1.setPixelColor(3, 255, 255,255);
    strip1.setPixelColor(4, 255, 255,255);
    strip1.setPixelColor(5, 255, 255,255);
    strip1.setPixelColor(6, 255, 255,255);
    strip1.setPixelColor(7, 255, 255,255);
    strip1.setPixelColor(8, 255, 255,255);
    strip1.setPixelColor(9, 255, 255,255);
    strip1.setPixelColor(10, 255, 255,255);
    strip1.setPixelColor(11, 255, 255,255);
    strip1.setPixelColor(12, 255, 255,255);
    strip1.setPixelColor(13, 255, 255,255);
    strip1.setPixelColor(14, 255, 255,255);
    strip1.setPixelColor(15, 255, 255,255);
    strip1.setPixelColor(16, 255, 255,255);
    strip1.setPixelColor(17, 255, 255,255);
    strip1.setPixelColor(18, 255, 255,255);
    strip1.setPixelColor(19, 255, 255,255);
    strip1.setPixelColor(20, 255, 255,255);
    strip1.setPixelColor(21, 255, 255,255);
    strip1.setPixelColor(22, 255, 255,255);
    strip1.setPixelColor(23, 255, 255,255);
    strip1.setPixelColor(24, 255, 255,255);
    strip1.setPixelColor(25, 255, 255,255);
    strip1.setPixelColor(26, 255, 255,255);
    strip1.setPixelColor(27, 255, 255,255);
    strip1.setPixelColor(28, 255, 255,255);
    strip1.setPixelColor(29, 255, 255,255);
    strip1.setPixelColor(30, 255, 255,255);
    strip1.setPixelColor(31, 255, 255,255);
    strip1.setPixelColor(32, 255, 255,255);
    strip1.setPixelColor(33, 255, 255,255);
    strip1.setPixelColor(34, 255, 255,255);
    strip1.setPixelColor(35, 255, 255,255);
    strip1.setPixelColor(36, 255, 255,255);
    strip1.setPixelColor(37, 255, 255,255);
    strip1.setPixelColor(38, 255, 255,255);
    strip1.setPixelColor(39, 255, 255,255);
    strip1.setPixelColor(40, 255, 255,255);
    strip1.setPixelColor(41, 255, 255,255);
    strip1.setPixelColor(42, 255, 255,255);
    strip1.setPixelColor(43, 255, 255,255);
    strip1.setPixelColor(44, 255, 255,255);
    strip1.setPixelColor(45, 255, 255,255);
    strip1.setPixelColor(46, 255, 255,255);
    strip1.setPixelColor(47, 255, 255,255);
    strip1.setPixelColor(48, 255, 255,255);
    strip1.setPixelColor(49, 255, 255,255);
    strip1.setPixelColor(50, 255, 255,255);
    strip1.setPixelColor(51, 255, 255,255);
    strip1.setPixelColor(52, 255, 255,255);
    strip1.setPixelColor(53, 255, 255,255);
    strip1.setPixelColor(54, 255, 255,255);
    strip1.setPixelColor(55, 255, 255,255);
    strip1.setPixelColor(56, 255, 255,255);
    strip1.setPixelColor(57, 255, 255,255);
    strip1.setPixelColor(58, 255, 255,255);
    strip1.setPixelColor(59, 255, 255,255);
  }


/////////BUTTONE TWO AND STRIP TWO IN THIS CHUNK

  //This section reads and counts the number of button pushes on buttonPin2
  // read the pushbutton input pin:
 buttonState2 = digitalRead(buttonPin2);

 // compare the buttonState to its previous state
 if (buttonState2 != lastButtonState2) {
    
  // if the state has changed, increment the counter
    if (buttonState2 == HIGH) {
      
     // if the current state is HIGH then the button went from off to on:
     buttonPushCounter2++;
     Serial.println("on");
      Serial.print("number of buttonTWO pushes:  ");
      Serial.println(buttonPushCounter2);
     
    } else {
     // if the current state is LOW then the button went from on to off:
      Serial.println("off");
    }
    // Delay a little bit to avoid bouncing
    delay(20);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState2 = buttonState2;

  // turns on the chasing RED LED every two button pushes by
  // checking the modulo of the button push counter. The modulo function gives you the remainder of the division of two numbers:
  
  if (buttonPushCounter2 % 2 == 0) {
  
  } else {
   strip2.show();
  }

 
  // // while the button is not pressed, all pixels white:
  while (digitalRead(buttonPin1) == LOW){
    strip2.show();
    strip2.setPixelColor(0, 255, 255,255);
    strip2.setPixelColor(1, 255, 255,255);
    strip2.setPixelColor(2, 255, 255,255);
    strip2.setPixelColor(3, 255, 255,255);
    strip2.setPixelColor(4, 255, 255,255);
    strip2.setPixelColor(5, 255, 255,255);
    strip2.setPixelColor(6, 255, 255,255);
    strip2.setPixelColor(7, 255, 255,255);
    strip2.setPixelColor(8, 255, 255,255);
    strip2.setPixelColor(9, 255, 255,255);
    strip2.setPixelColor(10, 255, 255,255);
    strip2.setPixelColor(11, 255, 255,255);
    strip2.setPixelColor(12, 255, 255,255);
    strip2.setPixelColor(13, 255, 255,255);
    strip2.setPixelColor(14, 255, 255,255);
    strip2.setPixelColor(15, 255, 255,255);
    strip2.setPixelColor(16, 255, 255,255);
    strip2.setPixelColor(17, 255, 255,255);
    strip2.setPixelColor(18, 255, 255,255);
    strip2.setPixelColor(19, 255, 255,255);
    strip2.setPixelColor(20, 255, 255,255);
    strip2.setPixelColor(21, 255, 255,255);
    strip2.setPixelColor(22, 255, 255,255);
    strip2.setPixelColor(23, 255, 255,255);
    strip2.setPixelColor(24, 255, 255,255);
    strip2.setPixelColor(25, 255, 255,255);
    strip2.setPixelColor(26, 255, 255,255);
    strip2.setPixelColor(27, 255, 255,255);
    strip2.setPixelColor(28, 255, 255,255);
    strip2.setPixelColor(29, 255, 255,255);
    strip2.setPixelColor(30, 255, 255,255);
    strip2.setPixelColor(31, 255, 255,255);
    strip2.setPixelColor(32, 255, 255,255);
    strip2.setPixelColor(33, 255, 255,255);
    strip2.setPixelColor(34, 255, 255,255);
    strip2.setPixelColor(35, 255, 255,255);
    strip2.setPixelColor(36, 255, 255,255);
    strip2.setPixelColor(37, 255, 255,255);
    strip2.setPixelColor(38, 255, 255,255);
    strip2.setPixelColor(39, 255, 255,255);
    strip2.setPixelColor(40, 255, 255,255);
    strip2.setPixelColor(41, 255, 255,255);
    strip2.setPixelColor(42, 255, 255,255);
    strip2.setPixelColor(43, 255, 255,255);
    strip2.setPixelColor(44, 255, 255,255);
    strip2.setPixelColor(45, 255, 255,255);
    strip2.setPixelColor(46, 255, 255,255);
    strip2.setPixelColor(47, 255, 255,255);
    strip2.setPixelColor(48, 255, 255,255);
    strip2.setPixelColor(49, 255, 255,255);
    strip2.setPixelColor(50, 255, 255,255);
    strip2.setPixelColor(51, 255, 255,255);
    strip2.setPixelColor(52, 255, 255,255);
    strip2.setPixelColor(53, 255, 255,255);
    strip2.setPixelColor(54, 255, 255,255);
    strip2.setPixelColor(55, 255, 255,255);
    strip2.setPixelColor(56, 255, 255,255);
    strip2.setPixelColor(57, 255, 255,255);
    strip2.setPixelColor(58, 255, 255,255);
    strip2.setPixelColor(59, 255, 255,255);
  }
  while (digitalRead(buttonPin2) == HIGH){
    rainbow2(6);
    chase2(strip2.Color(255, 0, 0)); // Red
    chase2(strip2.Color(255, 0, 0)); // Red
    chase2(strip2.Color(255, 0, 0)); // Red
    chase2(strip2.Color(255, 0, 0)); // Red
    chase2(strip2.Color(255, 0, 0)); // Red
    chase2(strip2.Color(255, 0, 0)); // Red
    chase2(strip2.Color(255, 0, 0)); // Red
  }

  // while the button is not pressed, all pixels white: returns strip to original display, all white
  while (digitalRead(buttonPin2) == LOW){
    strip2.show();
    strip2.setPixelColor(0, 255, 255,255);
    strip2.setPixelColor(1, 255, 255,255);
    strip2.setPixelColor(2, 255, 255,255);
    strip2.setPixelColor(3, 255, 255,255);
    strip2.setPixelColor(4, 255, 255,255);
    strip2.setPixelColor(5, 255, 255,255);
    strip2.setPixelColor(6, 255, 255,255);
    strip2.setPixelColor(7, 255, 255,255);
    strip2.setPixelColor(8, 255, 255,255);
    strip2.setPixelColor(9, 255, 255,255);
    strip2.setPixelColor(10, 255, 255,255);
    strip2.setPixelColor(11, 255, 255,255);
    strip2.setPixelColor(12, 255, 255,255);
    strip2.setPixelColor(13, 255, 255,255);
    strip2.setPixelColor(14, 255, 255,255);
    strip2.setPixelColor(15, 255, 255,255);
    strip2.setPixelColor(16, 255, 255,255);
    strip2.setPixelColor(17, 255, 255,255);
    strip2.setPixelColor(18, 255, 255,255);
    strip2.setPixelColor(19, 255, 255,255);
    strip2.setPixelColor(20, 255, 255,255);
    strip2.setPixelColor(21, 255, 255,255);
    strip2.setPixelColor(22, 255, 255,255);
    strip2.setPixelColor(23, 255, 255,255);
    strip2.setPixelColor(24, 255, 255,255);
    strip2.setPixelColor(25, 255, 255,255);
    strip2.setPixelColor(26, 255, 255,255);
    strip2.setPixelColor(27, 255, 255,255);
    strip2.setPixelColor(28, 255, 255,255);
    strip2.setPixelColor(29, 255, 255,255);
    strip2.setPixelColor(30, 255, 255,255);
    strip2.setPixelColor(31, 255, 255,255);
    strip2.setPixelColor(32, 255, 255,255);
    strip2.setPixelColor(33, 255, 255,255);
    strip2.setPixelColor(34, 255, 255,255);
    strip2.setPixelColor(35, 255, 255,255);
    strip2.setPixelColor(36, 255, 255,255);
    strip2.setPixelColor(37, 255, 255,255);
    strip2.setPixelColor(38, 255, 255,255);
    strip2.setPixelColor(39, 255, 255,255);
    strip2.setPixelColor(40, 255, 255,255);
    strip2.setPixelColor(41, 255, 255,255);
    strip2.setPixelColor(42, 255, 255,255);
    strip2.setPixelColor(43, 255, 255,255);
    strip2.setPixelColor(44, 255, 255,255);
    strip2.setPixelColor(45, 255, 255,255);
    strip2.setPixelColor(46, 255, 255,255);
    strip2.setPixelColor(47, 255, 255,255);
    strip2.setPixelColor(48, 255, 255,255);
    strip2.setPixelColor(49, 255, 255,255);
    strip2.setPixelColor(50, 255, 255,255);
    strip2.setPixelColor(51, 255, 255,255);
    strip2.setPixelColor(52, 255, 255,255);
    strip2.setPixelColor(53, 255, 255,255);
    strip2.setPixelColor(54, 255, 255,255);
    strip2.setPixelColor(55, 255, 255,255);
    strip2.setPixelColor(56, 255, 255,255);
    strip2.setPixelColor(57, 255, 255,255);
    strip2.setPixelColor(58, 255, 255,255);
    strip2.setPixelColor(59, 255, 255,255);
  }
}
 

static void chase1(uint32_t c) {
  for(uint16_t i=0; i<strip1.numPixels()+30; i++) {
      strip1.setPixelColor(i  , c); // Draw new pixel
      strip1.setPixelColor(i-30, 0); // Erase pixel a few steps back
      strip1.show();
      delay(25);
  }
}

static void chase2(uint32_t c) {
  for(uint16_t i=0; i<strip2.numPixels()+60; i++) {
      strip2.setPixelColor(i  , c); // Draw new pixel
      strip2.setPixelColor(i-60, 0); // Erase pixel a few steps back
      strip2.show();
      delay(15);
  }
}

void rainbow1(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip1.numPixels(); i++) {
      strip1.setPixelColor(i, Wheel1((i+j) & 255));
    }
    strip1.show();
    delay(wait);
  }
}

void rainbow2(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip2.numPixels(); i++) {
      strip2.setPixelColor(i, Wheel2((i+j) & 255));
    }
    strip2.show();
    delay(wait);
  }
}

// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle1(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip1.numPixels(); i++) {
      strip1.setPixelColor(i, Wheel1(((i * 256 / strip1.numPixels()) + j) & 255));
    }
    strip1.show();
    delay(wait);
  }
}

// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle2(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip2.numPixels(); i++) {
      strip2.setPixelColor(i, Wheel2(((i * 256 / strip2.numPixels()) + j) & 255));
    }
    strip2.show();
    delay(wait);
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel1(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip1.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip1.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip1.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}


// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel2(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip2.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip2.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip2.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
