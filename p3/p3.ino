/*
 Pulsador Timbre
Jose Pujol
 */

// constantes que no cambian
// se usan para establecer los pines

const int buttonPin = 2;     // el numero del pin del pulsador
const int buzzerPin =  12;      // el numero de pin del zumbador

// variables que cambian
int buttonState = 0;         // variable para almacenar el estado del pulsador

void setup() {

  // inicializa el pulsador como entrada
  pinMode(buttonPin, INPUT);
  // inicializa el zumbador como salida
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
// variable local?
  // lee el estado del pulsador y lo almacena en la variable
  buttonState = digitalRead(buttonPin);

  // revisa si el pulsador esta presionado
  if (buttonState == HIGH) {
    // enciende el pulsador
    digitalWrite(buzzerPin, HIGH);
  }
  // si no esta presionado
  else {
    // apaga el pulsador
    digitalWrite(buzzerPin, LOW);
  }
}
