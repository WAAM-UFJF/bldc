#include <Arduino.h>

// the number of the LED pin
const int ledPin = 27;  // 16 corresponds to GPIO16

// setting PWM properties
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;
int dutyCycle = 0;
 
void setup(){
  // configure LED PWM functionalitites
  Serial.begin(115200);
  ledcSetup(ledChannel, freq, resolution);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(ledPin, ledChannel);
  Serial.println("Iniciando o PWM: ");
}
 
void loop(){

  Serial.println("Dutycycle = 64");
  dutyCycle = 64;
  ledcWrite(ledChannel, dutyCycle);
  delay(4000);

  Serial.println("Dutycycle = 127");
  dutyCycle = 127;
  ledcWrite(ledChannel, dutyCycle);
  delay(4000);

  Serial.println("Dutycycle = 192");
  dutyCycle = 192;
  ledcWrite(ledChannel, dutyCycle);
  delay(4000);

  Serial.println("Dutycycle = 255");
  dutyCycle = 255;
  ledcWrite(ledChannel, dutyCycle);
  delay(4000);

  }
