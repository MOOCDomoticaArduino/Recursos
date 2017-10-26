/*
 Secuencia de antirrobo de una casa
 JA Vacas

 Realizamos una secuencia iluminando las distintas habitaciones de la casa

 Dormitorio: Led Rojo   pin 11
 Salon:      Led Azul   pin 8
 Cocina:     Led Azul   pin 5
 Entrada:    Led Verde  pin 2
 */

// declaracion de variables 
// Conexiones
const int  ledDormitorioPin=11; // LED que simula la luz del porche
const int  ledSalonPin=8; // LED que simula la luz del salon
const int  ledCocinaPin=5; // LED que simula la luz del cocina
const int  ledEntradaPin=2; // LED que simula la luz del jardin

// Tiempo entre pasos
const int duracionTarde=600;  // Tiempo que estara encendido el porche
const int duracionNoche=1200;  // Tiempo que estara encendido el salon y la cocina
const int duracionMadrugada=300;  // Tiempo que estara encendido el jardin

// Configuración 
void setup() {
  // configuramos los pines como salidas
  pinMode(ledDormitorioPin,OUTPUT);
  pinMode(ledSalonPin,OUTPUT);
  pinMode(ledCocinaPin,OUTPUT);
  pinMode(ledEntradaPin,OUTPUT);
}

// Bucle que se repite
void loop() {
  
  // Estado tarde
  
  digitalWrite(ledSalonPin,HIGH);     // Encendemos el salon
  digitalWrite(ledCocinaPin,HIGH);    // Encendemos el salon
  digitalWrite(ledDormitorioPin,LOW); // Apagamos el dormitorio
  digitalWrite(ledEntradaPin,LOW);    // Apagamos la entrada
  
  delay(duracionTarde);  //Esperamos hasta el siguiente estado


  // Estado noche

  digitalWrite(ledSalonPin,LOW);     // Encendemos el salon
  digitalWrite(ledCocinaPin,LOW);    // Encendemos el salon
  digitalWrite(ledDormitorioPin,HIGH); // Apagamos el dormitorio
  digitalWrite(ledEntradaPin,LOW);    // Apagamos la entrada

delay(duracionNoche);
    
  digitalWrite(ledSalonPin,LOW);     // Encendemos el salon
  digitalWrite(ledCocinaPin,LOW);    // Encendemos el salon
  digitalWrite(ledDormitorioPin,LOW); // Apagamos el dormitorio
  digitalWrite(ledEntradaPin, HIGH);    // Apagamos la entrada

delay(duracionMadrugada);
}
