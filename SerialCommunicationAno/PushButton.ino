int buttonPinA = 2;
int buttonReadA;
int buttonPinW = 3;
int buttonReadW;
int buttonPinD = 4;
int buttonReadD;
int buttonPinS = 6;
int buttonReadS;
int dt=40;

void setup()
{
    Serial.begin(9600);
    pinMode(buttonPinW, INPUT);
    pinMode(buttonPinA, INPUT);
    pinMode(buttonPinS, INPUT);
    pinMode(buttonPinD, INPUT);
}
String Command = "";
// the loop function runs over and over again forever
void loop()
{
    buttonReadW = digitalRead(buttonPinW);
    buttonReadA = digitalRead(buttonPinA);
    buttonReadS = digitalRead(buttonPinS);
    buttonReadD = digitalRead(buttonPinD);
    // Serial.println(buttonRead);

    CheckCommandInput(buttonReadW, "W");
    CheckCommandInput(buttonReadA, "A");
    CheckCommandInput(buttonReadS, "S");
    CheckCommandInput(buttonReadD, "D");
    Serial.println(Command);
    Serial.flush();
    Command="";
    delay(dt);

}

void CheckCommandInput(int button, String command)
{
    if (button == 1)
    {
        Command = Command + command;
    }
    if (button == 0)
    {
        Command = Command + "0";
    }
}
