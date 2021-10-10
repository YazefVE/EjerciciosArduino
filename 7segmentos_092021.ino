/****************************************************************
  Controlar intensidad de led con potenciometro
  Materiales:
  led
  potenciometro
  Arduino UNO
  Resistencias de 220omh

*****************************************************************/
/*
	Variables para lectura de potenciometro y valor para 
    intensidad del led.
    Variables para definir pines de entrada y salida
*/
int volumen , valor ;
byte pinPot = A3, pinLed = 10;

void setup()
{
 	Serial.begin(9600);	
 	pinMode(A3,INPUT);
  	pinMode(10,OUTPUT);
}

void loop()
{
  	
   	volumen = analogRead(A3);
  	valor	= map(volumen,0,1023,0,255);
  
  	analogWrite(10,valor);
}