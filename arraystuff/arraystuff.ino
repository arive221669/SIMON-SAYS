// which pins are the LEDs plugged into
int leds[] = {8, 9, 10, 11};

// which pins are the buttons connected to
int buttons[] = {4, 5, 6, 7};

// randomized pattern
int pattern[] = {2, 3, 1, 0};

// user input pattern
int userPattern[] = {0,0,0,0};

void setup() {

  Serial.begin(9600);
  Serial.println("system online");

  
  for ( int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }

}

void loop() {

  // generate a new pattern
  for ( int i = 0; i < 4; i++) {
    
    pattern[i] = random(4);
    Serial.print(pattern[i]);
  }
  Serial.println("");
  
  // all LEDs start as off
  for ( int i = 0; i < 4; i++) {
    digitalWrite(leds[i], LOW);
  }

  for ( int i = 0; i < 4; i++) {
    // flash the LED on for a sec
    digitalWrite(leds[pattern[i]], HIGH);
    delay(500);
    digitalWrite(leds[pattern[i]], LOW);
    delay(500);
    
  }
  
  delay(2000);

}
