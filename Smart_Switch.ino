const int micPin = 2;    // Microphone sensor digital output
const int relayPin = 8;  // Relay module input pin

int relayState = HIGH;   // Start with relay OFF (for active LOW relays)
int lastMicState = LOW;  
unsigned long lastDebounce = 0;
unsigned long debounceDelay = 200;  // milliseconds

void setup() {
  pinMode(micPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, relayState);  // Initialize relay as OFF
}

void loop() {
  int micState = digitalRead(micPin);

  // Detect a clap/sound with debounce to avoid multiple triggers
  if (micState == HIGH && lastMicState == LOW && (millis() - lastDebounce) > debounceDelay) {
    relayState = !relayState;          // Toggle relay state
    digitalWrite(relayPin, relayState);
    lastDebounce = millis();
  }

  lastMicState = micState;
}
