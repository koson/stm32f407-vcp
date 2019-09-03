#include <Arduino.h>
#include "usb_serial.h"

USBSerial USB;

void setup() {
  // put your setup code here, to run once:
  USB.begin(115200);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  USB.println("Hello World.\n");
}