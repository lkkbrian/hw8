void setup() {
 
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(50);
  digitalWrite(LED_BUILTIN, LOW);
  delay(150); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(50);
  digitalWrite(LED_BUILTIN, LOW);
  delay(150);          
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(50);
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);                                                                 
}
