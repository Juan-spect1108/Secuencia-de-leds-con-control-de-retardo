// Designed by: Juan Rodrigo Guzman Martinez

int tiempo=0; // Declaramos una variable donde se almacenara el tiempo de retardo 
int potenciometro=A0; // Declaramos el pin donde se conectara el potenciometro 
int estado; // Declaramos una variable llamada estado

void setup() {
  
for(int pinLed=4; pinLed <8; pinLed++){ // Pines donde se conctaran los LEDS que son del 4 al 8
pinMode(pinLed, OUTPUT); // Declaramos los LEDS como una salida 
}
}

void loop() {
  
estado=analogRead(potenciometro); // Realizmos la lectura analogica del potenciometro en la variable estado

if( estado>=0 && estado<= 256) { // Si mi estado esta entre 0 y 256 entonces el tiempo sera de 1500 milisegundos 
tiempo=1500;
}

if( estado>=257 && estado<= 512) { // Si mi estado esta entre 256 y 512 entonces el tiempo sera de 1000 milisegundos
tiempo=1000;
}

if( estado>=513 && estado <= 768) { // Si mi estado esta entre 513 y 768 entonces el tiempo sera de 500 milisegundos
tiempo=500;
}

if( estado>=769 && estado <= 1023) { // Si mi estado esta entre 769 y 1023 entonces el tiempo sera de 200 milisegundos
tiempo=200;
}
 
for(int pinLed=4;  pinLed <8; pinLed++){ // Bucle de incremento de la secuencia por los pines 4 a 8
digitalWrite(pinLed, HIGH); // Se enciende el LED
delay(tiempo); // Le damos un retardo la cual se encuentra en la variable tiempo 
digitalWrite(pinLed, LOW); // Se apaga el LED
}

for(int pinLed =8;  pinLed >4; pinLed--){ // Bucle de decremento de la secuencia por los pines 8 a 4
digitalWrite(pinLed, HIGH); // Se enciende el LED
delay(tiempo); // Le damos un retardo la cual se encuentra en la variable tiempo 
digitalWrite(pinLed, LOW); // Se apaga el LED
}
}
