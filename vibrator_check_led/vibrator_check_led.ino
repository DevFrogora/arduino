
int vib = 8;
int led = 9;

void setup() {
  // put your setup code here, to run once:

  pinMode(led, OUTPUT);
  pinMode(vib, INPUT);

  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);


}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(vib) == LOW)
  {
    digitalWrite(led, HIGH);
    delay(4000);

  } else
  {
    digitalWrite(led, LOW);

  }

}
