/****************************************************************
  Detectar movimiento con sensor PIR y encender led
  Materiales:
  led RGB
  Sensor PIR
  1 resistencias 220 omh (led)
  Arduino UNO
  Resistencias de 220omh

*****************************************************************/
const int pinLed= 7, pinPIR = 2;

void setup()
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinPIR, INPUT);
}

void loop()
{
  int value= digitalRead(pinPIR);
 
  if (value == HIGH)
  {
    digitalWrite(pinLed, HIGH);
    delay(50);
    digitalWrite(pinLed, LOW);
    delay(50);
  }
  else
  {
    digitalWrite(pinLed, LOW);
  }
}