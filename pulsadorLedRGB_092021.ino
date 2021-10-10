/****************************************************************
  DEtectar moviemnto con ultrasonido y activar buzzer y led
  Materiales:
  led RGB
  buzzer
  ultrasonido
  1 resistencias 220 omh (led)
  Arduino UNO
  Resistencias de 220omh

*****************************************************************/
/*Variables para guardar velocidad, distancia y tiempo*/
float velocidad = 0.01716, distancia = 0, tiempo = 0;

/*Variables para pines echo y trigger del ultrasonido, buzzer y led*/
int trigger = 2, echo = A5, buzzer = 4, led = 5;

void setup()
{	
  Serial.begin(9600);
 	pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  
}

void loop()
{
  digitalWrite(trigger,LOW);
  delayMicroseconds(20);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  
  tiempo = pulseIn(echo,HIGH);
  
  distancia = velocidad * tiempo;
  
  if(distancia < 100){
  	digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    delay(distancia*10);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    delay(distancia*10);
  }
  Serial.println(distancia);
}