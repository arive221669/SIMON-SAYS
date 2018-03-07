//variables for each component of project, ledPins, buttons, pattern, and userPattern
int ledPins[] = {8, 9, 10, 11};

int buttons[] = {4, 5, 6, 7};

int pattern[4];
int userPattern[] = {1, 2, 3, 4};

void setup() {

  Serial.begin(9600);
  Serial.println("System Online");
  
  //applies to all outputs of 'ledPins'
  for(int i = 0; i < 4; i++){
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttons[i], INPUT);
  }
  //choose how many lives player
}

void loop() {
   
  // create a pattern
  for(int i = 0; i < 4; i++){
    pattern[i] = random(4);
    Serial.print(pattern[i]);
    
  }
  Serial.println("");
  {}
  // store a pattern 
  // compare button patterns to right pattern
  //
//  Serial.println("works");
  // display pattern;
//   for ( int i = 0; i < 4; i++) {
//    pattern[i] = random(4);
//    Serial.print(pattern[i]);
//  }
//  Serial.println("");
//  
//  // all LEDs start as off
//  for ( int i = 0; i < 4; i++) {
//    digitalWrite(ledPins[i], LOW);
//  }
//
//  // All LEDS turn on / pattern starts
//  for ( int i = 0; i < 4; i++) {
//    digitalWrite(ledPins[pattern[i]], HIGH);
//    delay(500);
//    digitalWrite(ledPins[pattern[i]], LOW);
//    delay(500);
//    
//  }
//  
//  delay(2000);
  
}
