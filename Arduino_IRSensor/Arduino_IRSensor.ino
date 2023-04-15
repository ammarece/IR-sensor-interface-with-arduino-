#define IR_PIN 2     // The pin on which the IR sensor output is connected

void setup() {
  Serial.begin(9600);
  pinMode(IR_PIN, INPUT);
}

void loop() {
  int obstacle = digitalRead(IR_PIN);  // Read the value of the IR sensor
  
  if (obstacle == LOW) {    // If an obstacle is detected
    Serial.println("Obstacle detected!");
  } else {                   // If no obstacle is detected
    Serial.println("No obstacle detected.");
  }
  
  delay(500);   // Wait for 500 milliseconds before taking the next measurement
}
