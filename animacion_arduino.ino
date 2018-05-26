void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(4,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  delay(200);
}

void loop() {
  if (digitalRead(2) == HIGH){
    Serial.write("arriba \n");
  }
   if (digitalRead(4) == HIGH){
    Serial.write("izquierda \n");
  }
   if (digitalRead(7) == HIGH){
    Serial.write("derecha \n");
  }
   if (digitalRead(8) == HIGH){
    Serial.write("abajo \n");
  }
  delay(50);

}
