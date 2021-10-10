/****************************************************************
  Prototipop de semaforo en Arduino UNO.
  Materiales:
  3 leds
  Arduino UNO
  Resistencias de 220omh

*****************************************************************/

byte pin1=12, pin2=8, pin3=7;

void setup()
{
  /*declaración de los pines en donde estan los led's*/
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3,  OUTPUT);
}

void loop()
{
  /*Código para prender el led verde*/
  digitalWrite(pin1, HIGH);
  delay(5000); 
  digitalWrite(pin1, LOW);
  delay(500);
  digitalWrite(pin1, HIGH);
  delay(500);
  digitalWrite(pin1, LOW);
  delay(500);
  digitalWrite(pin1, HIGH);
  delay(500);
  digitalWrite(pin1, LOW);
  
 
  
  /*Código para prender el led amarillo*/
  digitalWrite(pin2, HIGH);
  delay(800); 
  digitalWrite(pin2, LOW);
  delay(400); 
  digitalWrite(pin2, HIGH);
  delay(800); 
  digitalWrite(pin2, LOW);
  delay(400);
  digitalWrite(pin2, HIGH);
  delay(800); 
  digitalWrite(pin2, LOW);
  delay(400); 
  digitalWrite(pin2, HIGH);
  delay(800); 
  digitalWrite(pin2, LOW);
  
  
  
  /*Código para prender el led rojo*/
  digitalWrite(pin3, HIGH);
  delay(5000); 
  digitalWrite(pin3, LOW); 
}