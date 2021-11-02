
int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
int led1 = 13;
int sensorValue = 0;        // value read from the pot

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);


  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.println(sensorValue);


  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(200);

  if (sensorValue > 700) {
    digitalWrite(led1, 1);
  } else
  {
    digitalWrite(led1, 0);
  }
}
