#define LED_PIN 8
#define GATE_PIN 6
#define BUTTON_PIN 7
#define BUTTONTWO_PIN 9

void setup()
{
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT);
    pinMode(GATE_PIN, OUTPUT);
    pinMode(BUTTON_PIN, INPUT);
    pinMode(BUTTONTWO_PIN, INPUT);
}

void loop()
{

    if (digitalRead(BUTTON_PIN) == HIGH)
    {
        for (int x = 0; x <= 200; x++)
        {
            Serial.println(x);
            gate();
            delay(50);
        }
    }
    else
    {
        digitalWrite(LED_PIN, LOW);
        if (digitalRead(BUTTONTWO_PIN) == HIGH)
        {
            digitalWrite(LED_PIN, HIGH);
            delay(3000);
        }
    }
}

void gate()
{
    if (digitalRead(BUTTONTWO_PIN) == HIGH)
    {
        digitalWrite(GATE_PIN, HIGH);
        delay(1000);
    }
    else
    {
        digitalWrite(GATE_PIN, LOW);
    }
}