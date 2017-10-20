/*
 Secuencia de antirrobo de una casa
 JA Vacas

 Realizamos una secuencia iluminando las distintas habitaciones de la casa

 Porche: Led Rojo pin 11
 Salon: Led Azul pin 8
 Cocina:  Led Azul  pin 5
 Jardin:  Led Verde  pin 2
 */

// declaracion de variables 
// Conexiones
int  ledPorchePin=11; // LED que simula la luz del porche
int  ledSalonPin=8; // LED que simula la luz del salon
int  ledCocinaPin=5; // LED que simula la luz del cocina
int  ledJardinPin=2; // LED que simula la luz del jardin

// Tiempo entre pasos
int duracionPorche=1000;  // Tiempo que estara encendido el porche
int duracionSalonCocina=2000;  // Tiempo que estara encendido el salon y la cocina
int duracionJardin=500;  // Tiempo que estara encendido el jardin

// Configuración 
void setup() {
  // configuramos los pines como salidas
  pinMode(ledPorchePin,OUTPUT);
  pinMode(ledSalonPin,OUTPUT);
  pinMode(ledCocinaPin,OUTPUT);
  pinMode(ledJardinPin,OUTPUT);
}

// Bucle que se repite
void loop() {
  
  // Estado nocturno
  digitalWrite(ledPorchePin,HIGH); // Encendemos el porche
  delay(duracionPorche);
  digitalWrite(ledPorchePin,LOW);// Apagamos el porche
  
  // Estado diurno
  digitalWrite(ledSalonPin,HIGH); // Encendemos el salon
  digitalWrite(ledCocinaPin,HIGH);// Encendemos la cocina
  delay(duracionSalonCocina);
  digitalWrite(ledSalonPin,LOW);  // Apagamos el salon
  digitalWrite(ledCocinaPin,LOW); // Apagamos la cocina
  
  // Estado Atardecer
  
  digitalWrite(ledJardinPin,HIGH);// Encendemos el jardin
  delay(duracionJardin);
  digitalWrite(ledJardinPin,LOW); // Apagamos el jardin
}
