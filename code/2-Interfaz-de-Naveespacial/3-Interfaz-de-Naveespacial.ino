int switchstate = 0;
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(2, INPUT);  // Activa la resistencia pull-up interna
}
void loop() {
  switchstate = digitalRead(2);

  if (switchstate == LOW) {
    //El pulsador no esta presionado
    digitalWrite(3, HIGH);  // Enciende el LED
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  } 
  else {
    digitalWrite(3, LOW);  
    digitalWrite(4, LOW); 
    digitalWrite(5, HIGH); 
    delay(150);             // Pequeño retardo
    //Cambiar los estados de los LED
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(150); //en pausa un cuarto de segundo
  }
}//volver al comienzo de la instruccion loop



