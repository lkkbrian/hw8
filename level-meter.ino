
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int ledPin2 = 12;
int ledPin3 = 11;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  // turn the ledPin on
  if (sensorValue >= 256) {
    digitalWrite(ledPin, HIGH);
  }
  // turn the ledPin off:
  else if (sensorValue <= 256) {
    digitalWrite(ledPin, LOW);
  }
    if (sensorValue >= 512) {
    digitalWrite(ledPin2, HIGH);
  }
  // turn the ledPin off:
  else if (sensorValue <= 512) {
    digitalWrite(ledPin2, LOW);
  }
  if (sensorValue >= 768) {
    digitalWrite(ledPin3, HIGH);
  }
  // turn the ledPin off:
  else if (sensorValue <= 768) {
    digitalWrite(ledPin3, LOW);
