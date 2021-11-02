int L1 = 13;
int L2 = 12;
int L3 = 11;
int L4 = 10;


int buttonPin = 9;     // the number of the pushbutton pin

int de = 50;

int p = 0;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH)
  {
    // turn LED on:
    p++;
    delay(2000);
  }

  if (p == 1) {
    digitalWrite(L1, 1);
    digitalWrite(L2, 0);
    digitalWrite(L3, 0);
    digitalWrite(L4, 0);
    delay(de);

    digitalWrite(L1, 0);
    digitalWrite(L2, 1);
    digitalWrite(L3, 0);
    digitalWrite(L4, 0);
    delay(de);

    digitalWrite(L1, 0);
    digitalWrite(L2, 0);
    digitalWrite(L3, 1);
    digitalWrite(L4, 0);
    delay(de);

    digitalWrite(L1, 0);
    digitalWrite(L2, 0);
    digitalWrite(L3, 0);
    digitalWrite(L4, 1);
    delay(de);

  }

  if (p == 2) {
    digitalWrite(L1, 0);
    digitalWrite(L2, 0);
    digitalWrite(L3, 0);
    digitalWrite(L4, 1);
    delay(de);

    digitalWrite(L1, 0);
    digitalWrite(L2, 0);
    digitalWrite(L3, 1);
    digitalWrite(L4, 0);
    delay(de);
    digitalWrite(L1, 0);
    digitalWrite(L2, 1);
    digitalWrite(L3, 0);
    digitalWrite(L4, 0);
    delay(de);
    digitalWrite(L1, 1);
    digitalWrite(L2, 0);
    digitalWrite(L3, 0);
    digitalWrite(L4, 0);
    delay(de);

  }
  if (p == 3) {
    digitalWrite(L1, 1);
    digitalWrite(L2, 1);
    digitalWrite(L3, 1);
    digitalWrite(L4, 1);
    delay(de);
  }
  if (p == 4) {
    digitalWrite(L1, 0);
    digitalWrite(L2, 0);
    digitalWrite(L3, 0);
    digitalWrite(L4, 0);
    delay(2000);
    p = 0;
  }
}
