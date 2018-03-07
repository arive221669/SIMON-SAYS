

void setup(){
  pinMode(10,OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, INPUT_PULLUP);
  pinMode(7, OUTPUT);
  
  }

void loop() {
    if (digitalRead(8) == LOW){

      digitalWrite(7,HIGH);
      
    }

    else{
      digitalWrite(7, LOW);
    }

}

