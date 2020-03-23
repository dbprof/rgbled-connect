void ledreset() {
  digitalWrite(4, 1); //BLUE
  digitalWrite(5, 1); //BLUE
  digitalWrite(6, 1); //GREEN
  digitalWrite(7, 1); //RED
}
void setup() {
  pinMode(4, OUTPUT); //BLUE
  pinMode(5, OUTPUT); //BLUE
  pinMode(6, OUTPUT); //GREEN
  pinMode(7, OUTPUT); //RED

  ledreset();
}
void loop() { 
  //digitalWrite(5, 0);
  //delay(1000);
  //ledreset();
  digitalWrite(4, 0);
  digitalWrite(6, 0);
  delay(1000);
  ledreset();
  digitalWrite(5, 0);
  digitalWrite(7, 0);
  delay(1000);
  ledreset();
  /*
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  delay(1000);
  ledreset();
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  delay(1000);
  ledreset();
  digitalWrite(7, 0);
  digitalWrite(5, 0);
  delay(1000);
  ledreset();
  */
}
