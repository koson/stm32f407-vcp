#include <Arduino.h>
#include "usb_serial.h"

USBSerial USB;

void setup() {
  // put your setup code here, to run once:
  USB.begin(115200);
  
  // Set the MCU's pin data direction.
  pinMode(PD13, OUTPUT);
  pinMode(PD14, OUTPUT);
  pinMode(PD15, OUTPUT);
  pinMode(PD12, OUTPUT);

  // Set all outputs LOW to have all LED's initially turned off.
  digitalWrite(PD13, LOW);
  digitalWrite(PD14, LOW);
  digitalWrite(PD15, LOW);
  digitalWrite(PD12, LOW);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  // USB.println("Hello World.\n");

  // Turn off the GREEN LED, turn on the ORANGE LED and wait for 1000ms.
  digitalWrite(PD12, LOW);
  digitalWrite(PD13, HIGH);
  delay(100);
  
  // Turn off the ORANGE LED, turn on the RED LED and wait for 1000ms.
  digitalWrite(PD13, LOW);
  digitalWrite(PD14, HIGH);
  delay(100);

  // Turn off the RED LED, turn on the BLUE LED and wait for 1000ms.
  digitalWrite(PD14, LOW);
  digitalWrite(PD15, HIGH);
  delay(100);

  // Turn off the BLUE LED, turn on the GREEN LED and wait for 1000ms.
  digitalWrite(PD15, LOW);
  digitalWrite(PD12, HIGH);
  delay(100);

}