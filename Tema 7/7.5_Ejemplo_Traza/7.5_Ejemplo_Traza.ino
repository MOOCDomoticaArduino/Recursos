int bTrazasActivadas=true;

void setup(){
  if(bTrazasActivadas){
    Serial.begin(9600);
    Serial.println("Trazas activadas");
  }
}

// Envia mensaje por el puerto serie
void traza(char * mensaje){
  if(bTrazasActivadas) {
    Serial.println(mensaje);
  }
}
// Envia el nombre y el valor de la variable por el puerto serie
void traza(char * nombreVariable, int valor){
  if(bTrazasActivadas) {
    Serial.print(nombreVariable);
    Serial.print(" = ");
    Serial.println(valor);
  }
}

void loop() {
  int variable;
  traza("Comienzo del bucle");
  
  for(variable = 0 ;variable < 100; variable+=10){
    traza("variable", variable);
  }

  traza("Fin del bucle");

}
