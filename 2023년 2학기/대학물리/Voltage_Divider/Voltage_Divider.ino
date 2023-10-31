const int analogPin = A0;
const float supplyVoltage = 5.0;
const float R2 = 82; 

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int sensorValue = analogRead(analogPin);
  
  float voltage = sensorValue * (supplyVoltage / 1023.0);
 
  float R1 = (R2 * (supplyVoltage - voltage)) / voltage;

  Serial.print("측정된 전압(V): ");
  Serial.println(voltage, 2);
  Serial.print("R1(옴): ");
  Serial.println(R1, 2);
  Serial.println();  
  delay(1000);
}
