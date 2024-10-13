 void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}
 void loop() {

  //Blink for 'H' (....)
  for (int i = 0; i < 4; i++) { 
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

   }

   delay(1000);

   //Blink for 'E' (.)
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

   delay(1000);

   //Blink for 'L' (.-..)
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

    digitalWrite(LED_BUILTIN, HIGH); 
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

   for (int i = 0; i < 2; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

   }

   delay(1000);
  
     //Blink for 'L' (.-..)
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

    digitalWrite(LED_BUILTIN, HIGH); 
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

   for (int i = 0; i < 2; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

   }

   delay(1000);

   //Blink for 'O' (---)
   for (int i = 0; i<3; i++) {
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

   }

   delay(1000);

   //Blink for ',' (--..--)
   for (int i = 0; i < 2; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

   }

    for (int i = 0; i < 2; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

   }

   for (int i = 0; i < 2; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

   }

    delay(1000); 

   //Blink for 'W' (.--)
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);

   for(int i = 0; i < 2; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);

   }

   delay(1000);

   //Blink for 'O' (---)
   for (int i = 0; i<3; i++) {
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

   }

   delay(1000);

   // Blink for 'R' (.-.)
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(250); 
    digitalWrite(LED_BUILTIN, LOW); 
    delay(250); 
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(500); 
    digitalWrite(LED_BUILTIN, LOW); 
    delay(250); 
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(250); 
    digitalWrite(LED_BUILTIN, LOW);

    delay(1000);

   //Blink for 'L' (.-..)
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

    digitalWrite(LED_BUILTIN, HIGH); 
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

   for (int i = 0; i < 2; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

   }
   
   delay(1000);

   //Blink for 'D' (-..)
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

  for (int i = 0; i < 2; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);

  }

  delay(2000);
 
 }