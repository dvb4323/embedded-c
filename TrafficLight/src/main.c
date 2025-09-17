#include <Arduino.h>

// Định nghĩa các chân cho đèn
#define RED_LED 2
#define YELLOW_LED 3
#define GREEN_LED 4

// Khai báo hàm
void setLights(int red, int yellow, int green);
void trafficLightSequence();

void setup()
{
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop()
{
  trafficLightSequence();
}

void setLights(int red, int yellow, int green)
{
  digitalWrite(RED_LED, red);
  digitalWrite(YELLOW_LED, yellow);
  digitalWrite(GREEN_LED, green);
}

void trafficLightSequence()
{
  // Đèn xanh
  setLights(LOW, LOW, HIGH);
  delay(5000); // 5 giây

  // Đèn vàng
  setLights(LOW, HIGH, LOW);
  delay(2000); // 2 giây

  // Đèn đỏ
  setLights(HIGH, LOW, LOW);
  delay(5000); // 5 giây

  // Chuyển từ đỏ sang xanh (đỏ và vàng cùng bật)
  setLights(HIGH, HIGH, LOW);
  delay(2000); // 2 giây
}