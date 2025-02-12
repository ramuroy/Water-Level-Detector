#define WATER_SENSOR A0  // Water level sensor connected to Analog pin A0
#define LED_PIN 7        // LED connected to digital pin 7
#define BUZZER_PIN 8     // Buzzer connected to digital pin 8

void setup() {
    pinMode(WATER_SENSOR, INPUT);  // Set water sensor as input
    pinMode(LED_PIN, OUTPUT);      // Set LED as output
    pinMode(BUZZER_PIN, OUTPUT);   // Set buzzer as output
    Serial.begin(9600);            // Initialize serial communication
}

void loop() {
    int waterLevel = analogRead(WATER_SENSOR);  // Read sensor value
    Serial.print("Water Level Sensor Value: ");
    Serial.println(waterLevel);  // Print sensor value for debugging

    if (waterLevel > 500) {  // Adjust threshold based on sensor calibration
        digitalWrite(LED_PIN, HIGH);   // Turn on LED when water reaches the level
    } else {
        digitalWrite(LED_PIN, LOW);    // Turn off LED if water is below the level
    }

    if (waterLevel > 800) {  // Overflow warning threshold
        digitalWrite(BUZZER_PIN, HIGH); // Activate buzzer
    } else {
        digitalWrite(BUZZER_PIN, LOW);  // Deactivate buzzer
    }

    delay(500);  // Small delay to avoid frequent toggling
}