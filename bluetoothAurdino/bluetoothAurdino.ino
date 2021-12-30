char val;
#define led2 2

#define enablePin13 13

void setup()
{

  //
  //  Serial.begin(9600);
  pinMode(led2, OUTPUT);

  digitalWrite(enablePin13, HIGH);

}

void loop()
{

    if (Serial.available())
    {
      val = Serial.read();
      Serial.println(val);
      if (val == 'a') {
        digitalWrite(led2, HIGH);
        Serial.println("High");
      }
      if (val == 'b') {
        digitalWrite(led2, LOW);
        Serial.println("low");
      }
    }


}
