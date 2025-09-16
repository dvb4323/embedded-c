#include <Arduino.h>

void setup() {
  // Đặt chân 2 của bo mạch (LED tích hợp) ở chế độ OUTPUT
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Bật đèn LED
  digitalWrite(LED_BUILTIN, HIGH);
  // Chờ 1000 mili giây (1 giây)
  delay(1000);
  // Tắt đèn LED
  digitalWrite(LED_BUILTIN, LOW);
  // Chờ 1000 mili giây (1 giây)
  delay(1000);
}