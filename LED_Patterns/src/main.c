#include <Arduino.h>

// Định nghĩa các chuỗi nhấp nháy: 1 = Bật, 0 = Tắt
const int pattern1[] = {1, 0, 1, 0, 1, 0, 0, 1, 1, 1};
const int pattern2[] = {1, 1, 1, 0, 1, 1, 1};

// Số phần tử trong mỗi mảng
const int pattern1_size = sizeof(pattern1) / sizeof(pattern1[0]);
const int pattern2_size = sizeof(pattern2) / sizeof(pattern2[0]);

const int ledPin = LED_BUILTIN;
const int delayTime = 200; // Thời gian nhấp nháy, đơn vị mili giây

// Khai báo hàm
void playPattern(const int pattern[], int size);

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // Chạy chuỗi nhấp nháy thứ nhất
  playPattern(pattern1, pattern1_size);
  delay(1000); // Chờ 1 giây trước khi chuyển sang chuỗi khác

  // Chạy chuỗi nhấp nháy thứ hai
  playPattern(pattern2, pattern2_size);
  delay(1000); // Chờ 1 giây trước khi lặp lại
}

// Hàm điều khiển nhấp nháy
void playPattern(const int pattern[], int size)
{
  for (int i = 0; i < size; i++)
  {
    if (pattern[i] == 1)
    {
      digitalWrite(ledPin, HIGH); // Bật đèn
    }
    else
    {
      digitalWrite(ledPin, LOW); // Tắt đèn
    }
    delay(delayTime);
  }
}