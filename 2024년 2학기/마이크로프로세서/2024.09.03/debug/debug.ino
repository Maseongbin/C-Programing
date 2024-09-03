#include <MsTimer2.h>

const int debug_pin1 = 33;
const int debug_pin2 = 34;

void serialprint(void)
{
  digitalWrite(debug_pin2, HIGH); // 함수의 시작
  Serial.print("debug");
  digitalWrite(debug_pin2, LOW);  // 함수의 끝
}

void flash()
{
  digitalWrite(debug_pin1, HIGH); // 함수의 시작
  serialprint();
  digitalWrite(debug_pin1, LOW);  // 함수의 끝
}

void setup()
{
  pinMode(debug_pin1, OUTPUT);
  pinMode(debug_pin2, OUTPUT);                                                                                                                 
  Serial.begin(115200);
  MsTimer2::set(20, flash);
  MsTimer2::start();
}

void loop()
{

}
