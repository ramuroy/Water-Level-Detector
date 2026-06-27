#define WATER_SENSOR A0  // Water level sensor on analog pin A0
#define LED_PIN 7        // LED on digital pin 7
#define BUZZER_PIN 8     // Buzzer on digital pin 8

// Hysteresis bands stop the outputs flickering when the level sits near a
// threshold: turn ON at the higher value, OFF only after it drops past the lower.
#define LED_ON 520
#define LED_OFF 480
#define BUZZER_ON 820
#define BUZZER_OFF 780

bool ledOn = false;
bool buzzerOn = false;

void setup() {
    // A0 (the analog water sensor) needs no pinMode for analogRead().
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int waterLevel = analogRead(WATER_SENSOR);
    Serial.print("Water Level Sensor Value: ");
    Serial.println(waterLevel);

    // LED: water has reached the set level
    if (!ledOn && waterLevel > LED_ON) ledOn = true;
    else if (ledOn && waterLevel < LED_OFF) ledOn = false;
    digitalWrite(LED_PIN, ledOn ? HIGH : LOW);

    // Buzzer: overflow warning
    if (!buzzerOn && waterLevel > BUZZER_ON) buzzerOn = true;
    else if (buzzerOn && waterLevel < BUZZER_OFF) buzzerOn = false;
    digitalWrite(BUZZER_PIN, buzzerOn ? HIGH : LOW);

    delay(200);
}
