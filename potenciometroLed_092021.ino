/****************************************************************
  Controlar dos servomotores con dos potenciomentros
  Materiales:
  2 servomotores
  2 potenciometro
  Arduino UNO
  Resistencias de 220omh

*****************************************************************/
//Libreria servo para menejo de servomotores
#include <Servo.h>

//definicion de los servomotores y pines de lectura de potenciometros
Servo S1, S2;
byte pinPot1 = A5;
byte pinPot2 = A4;

int angulo1 = 0;
int angulo2 = 0;


void setup()
{
  //Inicializar servo con respectivos pines de potenciometros
  S1.attach(2);
  S2.attach(7);
  Serial.begin(9600);
  pinMode(pinPot1,INPUT);
  pinMode(pinPot2,INPUT);
}

void loop()
{
   angulo1 = analogRead(pinPot1);
   angulo2 = analogRead(pinPot2);
  
   angulo1 = map(angulo1,0,1023,180,0);
   angulo2 = map(angulo2,0,1023,180,0);
  
  
   S1.write(angulo1);   
   S2.write(angulo2);
   
   Serial.println(angulo1);
   Serial.println(angulo2);                         

}
