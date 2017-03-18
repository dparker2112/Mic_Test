/*
  ReadAnalogVoltage
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

int threshold = 336;
int sensorValue = 0;
#define LED_PIN 10
#define MIC_PIN A0

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {

  digitalWrite(LED_PIN, LOW);
  // read the input on analog pin 0:
  int sensorValue = analogRead(MIC_PIN);
  if (sensorValue > threshold){
    digitalWrite(LED_PIN, HIGH);
    // print out the value you read:
    Serial.println(sensorValue);
  }
  else{

  digitalWrite(LED_PIN, LOW);
  }
}
