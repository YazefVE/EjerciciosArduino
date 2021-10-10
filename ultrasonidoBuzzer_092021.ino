/****************************************************************
  Detectar luz con fotorresitencia y activar buzzer y led RGB
  Materiales:
  led RGB
  buzzer
  fotorresistencia
  4 resistencias 220 omh (ledRGB y fotorresistencia)
  Arduino UNO
  Resistencias de 220omh

*****************************************************************/
//Variable en donde se guarda el valor de la fotorresistencia (FR)
int valorLDR;
byte pinR = 3, pinG = 5, pinB = 6, buzzer = 8;

void setup()
{
  /* 
  	Declarar pines como salidas para los led's
    y el pin para FR cono entrada
    iniciar comunicacion serial
  */
  pinMode(pinR,OUTPUT);
  pinMode(pinG,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600); 
}

void loop()
{
  
  //Leemos lectura de FR e imprimimos valor
 valorLDR = analogRead(A0);
 Serial.println(valorLDR);
 
  /*
  	Condicionales para saber que color se va a iniciar
    Se usa Led RGB
    menor a 80 color verde,
    entre 80 y 250 azul y
    mayor a 250 rojo
  */
  if(valorLDR < 80){
  	encender(2);
  }
  
  if(valorLDR >= 80 && valorLDR <= 250){
  	encender(1);
  }
  
  if(valorLDR > 250){
  	encender(0);
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
  }
  
}

//Metodo para encender led RGB
void encender(int i){
	if(i == 0)
    {
    	digitalWrite(pinR,HIGH);
      	digitalWrite(pinG,LOW);
      	digitalWrite(pinB,LOW);
    }
  
  	if(i == 1)
    {
    	digitalWrite(pinR,LOW);
      	digitalWrite(pinG,HIGH);
      	digitalWrite(pinB,LOW);	
    }
  
  	if(i == 2)
    {
    	digitalWrite(pinR,LOW);
      	digitalWrite(pinG,LOW);
      	digitalWrite(pinB,HIGH);	
    }

}