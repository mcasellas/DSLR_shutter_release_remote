/*
  DSLR Shutter Release Remote (RC)
*/

const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to

int sensorValue = 0;        // value read from the pot
int shoot = 0;        // value output to the PWM (analog out)

void setup() {
  //Serial.begin(9600);

  pinMode(2, OUTPUT);
}

void loop() {
  
  sensorValue = analogRead(analogInPin);

  if (sensorValue >= 200) shoot = 1;
  
  if (shoot == 1) {
    digitalWrite(2, LOW);   
    pinMode(2, OUTPUT);  
    delay(1000); // wait for a second
  }
  
  shoot = 0;
  digitalWrite(2, LOW);    
  pinMode(2, INPUT);  
  
  /* print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(valor);
  */
  delay(200);
}
