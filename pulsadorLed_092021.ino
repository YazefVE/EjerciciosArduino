/****************************************************************
  Encender y apagar un led RGB con un pulsador
  Materiales:
  led RGB
  pulsador
  3 resistencias 220 omh (ledRGB) y 1 de 1komh (pulsador)
  Arduino UNO
  Resistencias de 220omh

*****************************************************************/
//Declarar variables de pines
byte pinPul =8, ledR = 3, ledG = 6, ledB = 5;
bool estadoBoton;
int estado = 0;

void setup()
{
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledB,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  estadoBoton = digitalRead(pinPul);
  
   //si el boton es pulsado
  if(estadoBoton==HIGH){        
    estado=1-estado;
  }

  if(estado == 1)
    OOLed(1);
  if(estado == 0)
    OOLed(0);

  Serial.println(estado);
  delay(1000);
}

//Define el color del led RGB
void Color(int R, int G, int B)
    {     
        analogWrite(ledR, R) ;   // Red    - Rojo
        analogWrite(ledG, G) ;   // Green - Verde
        analogWrite(ledB, B) ;   // Blue - Azul
    }

//Define si esta apagado o encendido
void OOLed (int valor){
	if(valor == 1){
    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
        for(int k = 0; k < 5; k++){
            Color(k,j,i);
          }
      }
    }
  }
  if(valor == 0){
    analogWrite(ledR, 0) ;   
    analogWrite(ledG, 0) ;   
    analogWrite(ledB, 0) ; 
  }
  
}