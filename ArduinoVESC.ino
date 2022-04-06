#include "VescUart.h"

/** Initiate VescUart class */
VescUart UART;

float angle = 0; /** The current in amps */
unsigned long time;
unsigned long wait;


void setup() {
  Serial.begin(9600);
  /** Setup UART port (Serial1 on Atmega32u4) */
  Serial1.begin(115200);

  /** Define which ports to use as UART */
  UART.setSerialPort(&Serial1);
}

void loop() {
  time = millis();

  while (1) {
    wait = millis();

    UART.setCurrent(0.5);
    if (wait - time > 5000) {
      break;
    }
  }



  UART.setPosition(0);
  delay(1000);
  UART.setPosition(270);
  delay(1000);
  UART.setPosition(180);
  delay(1000);
  UART.setPosition(90);
  delay(1000);
  UART.setPosition(0);
  delay(1000);


  // UART.setBrakeCurrent(current);

}
