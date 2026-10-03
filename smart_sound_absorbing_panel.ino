// Smart Sound-Absorbing Panel
// Arduino Uno + KY-038 Sound Sensor + Relay
// Noise threshold: 70 dB (project specification)

const int soundSensorPin = 2;
const int relayPin = 8;

const float SOUND_THRESHOLD_DB = 70.0;

void setup() {
  pinMode(soundSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);

  // Relay OFF initially
  digitalWrite(relayPin, HIGH);

  Serial.begin(9600);

  Serial.println("Smart Sound-Absorbing Panel");
  Serial.println("Noise Threshold: 70 dB");
}

void loop() {

  int soundState = digitalRead(soundSensorPin);

  if (soundState == HIGH) {

    // Noise threshold detected
    digitalWrite(relayPin, LOW);

    Serial.print("Noise threshold exceeded: ");
    Serial.print(SOUND_THRESHOLD_DB);
    Serial.println(" dB");

    delay(3000);

    // Turn relay OFF
    digitalWrite(relayPin, HIGH);

    Serial.println("Output OFF");
  }

  else {
    digitalWrite(relayPin, HIGH);
  }

  delay(100);
}