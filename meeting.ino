void setup() {
 
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  for (int i=0; i<10 ; i++) {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);      
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);      
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);      
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);      
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(2750);                     
  }                                           
}
