#include <Arduino.h>

// put function declarations here:
//int myFunction(int, int);

void setup() {
  //int myFunction(int, int);
  pinMode(CYD_LED_BLUE, OUTPUT);
  Serial.begin(115200);
  Serial.println("Hello from setup");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  digitalWrite(CYD_LED_BLUE, HIGH);
  Serial.println("Hello from the loop");
  delay(1000);
  digitalWrite(CYD_LED_BLUE, LOW);
}

// put function definitions here:
/*int myFunction(int x, int y) {
  return x + y;
}*/