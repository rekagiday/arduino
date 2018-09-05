const int sensorPin = A0;
const float baselineTemp = 21.0;

void setup() {
  Serial.begin(9600);

  for(int pinNumber = 2; pinNumber < 5; pinNumber++){
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop() {
  int sensorVal = analogRead(sensorPin);
  float voltage = (sensorVal / 1024.0) * 5.0;
  float temperature = (voltage - 0.5) * 100;

  Serial.print("sensor value: ");
  Serial.print(sensorVal);
  Serial.print(", volts: ");
  Serial.print(voltage);
  Serial.print(", temperature: ");
  Serial.print(temperature);
  Serial.println("°C");
  
  if( temperature < baselineTemp ){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if( temperature >= baselineTemp + 1 && temperature < baselineTemp + 2){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if( temperature >= baselineTemp + 2 && temperature < baselineTemp + 3){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  } else if( temperature >= baselineTemp + 3 ){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  delay(1000);
}
