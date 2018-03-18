void setup() {
 
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  for (int i=0; i<60 ; i++) {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(50);
  digitalWrite(LED_BUILTIN, LOW);
  delay(50);                     
  }
  delay(2000);                                            
}
