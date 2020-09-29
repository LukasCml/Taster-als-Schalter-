/*
   Programm:          Taster mit Pulldown schaltet LED ein/aus
   Letzte Änderung:   29.09.2020
   Programmierer:     LC

   Hardware:      Arduino UNO / LED an Pin 13 / Taster (Schließer) an Pin 8 / Pulldown
*/

#define LED 13         //grüne LED an Pin 13
#define Taster 8     //Taster an Pin 8

boolean statusLED;


void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(Taster, INPUT);
}

void loop()
{
  if (digitalRead(Taster) == 1)
  {
    if (statusLED == 1)
    {
      digitalWrite (LED, LOW);
      statusLED = 0;
    }
    else
    {
      digitalWrite(LED, HIGH);
      statusLED = 1;
    }
  }
}

