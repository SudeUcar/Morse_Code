void blinkDot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(250); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(250); 
}

void blinkDash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(250); 
}

void blinkLetter(char letter) {
  switch (letter) {
    case 'A': blinkDot(); blinkDash(); break;      // .-
    case 'B': blinkDash(); blinkDot(); blinkDot(); blinkDot(); break; // -...
    case 'C': blinkDash(); blinkDot(); blinkDash(); blinkDot(); break; // -.-.
    case 'D': blinkDash(); blinkDot(); blinkDot(); break; // -..
    case 'E': blinkDot(); break;                    // .
    case 'F': blinkDot(); blinkDot(); blinkDash(); blinkDot(); break; // ..-.
    case 'G': blinkDash(); blinkDash(); blinkDot(); break; // --.
    case 'H': for (int i = 0; i < 4; i++) blinkDot(); break; // ....
    case 'I': blinkDot(); blinkDot(); break;       // ..
    case 'J': blinkDot(); blinkDash(); blinkDash(); blinkDash(); break; // .---
    case 'K': blinkDash(); blinkDot(); blinkDash(); break; // -.-
    case 'L': blinkDot(); blinkDash(); blinkDot(); blinkDot(); break; // .-..
    case 'M': blinkDash(); blinkDash(); break;      // --
    case 'N': blinkDash(); blinkDot(); break;       // -.
    case 'O': blinkDash(); blinkDash(); blinkDash(); break; // ---
    case 'P': blinkDot(); blinkDash(); blinkDash(); blinkDot(); break; // .--.
    case 'Q': blinkDash(); blinkDash(); blinkDot(); blinkDash(); break; // --.-
    case 'R': blinkDot(); blinkDash(); blinkDot(); break; // .-.
    case 'S': for (int i = 0; i < 3; i++) blinkDot(); break; // ...
    case 'T': blinkDash(); break;                    // -
    case 'U': blinkDot(); blinkDot(); blinkDash(); break; // ..-
    case 'V': for (int i = 0; i < 3; i++) { blinkDot(); } blinkDash(); break; // ...-
    case 'W': blinkDot(); blinkDash(); blinkDash(); break; // .--
    case 'X': blinkDash(); blinkDot(); blinkDot(); blinkDash(); break; // -..-
    case 'Y': blinkDash(); blinkDot(); blinkDash(); blinkDash(); break; // -.--
    case 'Z': blinkDash(); blinkDash(); blinkDot(); blinkDot(); break; // --..
    case '0': for (int i = 0; i < 5; i++) blinkDash(); break; // -----
    case '1': blinkDot(); for (int i = 0; i < 4; i++) blinkDash(); break; // .----
    case '2': for (int i = 0; i < 2; i++) { blinkDot(); } blinkDash(); break; // ..---
    case '3': for (int i = 0; i < 3; i++) { blinkDot(); } blinkDash(); break; // ...--
    case '4': for (int i = 0; i < 4; i++) { blinkDot(); } blinkDash(); break; // ....-
    case '5': for (int i = 0; i < 5; i++) blinkDot(); break; // .....
    case '6': blinkDash(); for (int i = 0; i < 4; i++) blinkDot(); break; // -....
    case '7': blinkDash(); blinkDash(); for (int i = 0; i < 3; i++) blinkDot(); break; // --...
    case '8': blinkDash(); blinkDash(); blinkDash(); blinkDot(); break; // ---..
    case '9': blinkDash(); blinkDash(); blinkDash(); blinkDash(); blinkDot(); break; // ----.
    case ' ': delay(1000); break; // Long pause for space
    default: break; // Do nothing for unknown characters
  }
}

void setup() {
  Serial.begin(9600); 
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    char letter = Serial.read(); // Read a single character
    blinkLetter(letter); // Blink the corresponding Morse code for the letter
    delay(500); // Space between letters
  }
}

