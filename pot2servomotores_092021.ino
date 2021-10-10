/****************************************************************
  Encender y apagar un led con un pulsador
  Materiales:
  led
  pulsador
  2 resistencias 220 omh (led) y 1komh (pulsador)
  Arduino UNO
  Resistencias de 220omh

*****************************************************************/
//Declarar variables de pines
byte pinPul = 8, led 3;
bool estadoBoton = 0;
int estado ;

void setup()
{
 Serial.begin(9600);
 pinMode(pinPul, INPUT);
 pinMode(led, OUTPUT);
}

void loop()
{
  //leer valor de pulsador
  estadoBoton = digitalRead(pinPul);
  
  //si el boton es pulsado
  if(estadoBoton==HIGH){         
    estado=1-estado;
  }
  
  if(estado == 1)
    digitalWrite(led,HIGH);
  else
    digitalWrite(led,LOW);

  Serial.println(estado);
 
  
}