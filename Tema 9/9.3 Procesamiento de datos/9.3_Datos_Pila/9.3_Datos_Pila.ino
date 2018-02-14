/* 
 *  Pila FIFO
 *  
 */
int pila[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int t = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  t++;
  for (int i = 8; i >= 0; i--) {
    pila[i + 1] = pila[i];
  }
  pila[0] = t;
  for (int i = 0; i < 10; i++) {
    Serial.print(pila[i]);
    Serial.print("   ");

  }
  Serial.println("");
  delay(2000);

}

