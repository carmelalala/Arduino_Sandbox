int sensorPin = A0;

void setup()
{  
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  int turbidity = map(sensorValue, 0,640, 100, 0);
  delay(100);
 
  Serial.println("turbidity:");
  Serial.println("   ");
  Serial.println(turbidity);
  delay(100);
 /* if (turbidity < 20) {
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    Serial.println(" its CLEAR ");
  }
  if ((turbidity > 10) && (turbidity < 50)) {
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    Serial.println(" its CLOUDY ");
  }
  if (turbidity > 50) {
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    Serial.println(" its DIRTY ");
  }*/

}
