void setup(){
  for(int i=4; i<36; i++){
    pinMode(i,INPUT); // set all button pins to input
  };
  pinMode(2,OUTPUT);
  digitalWrite(2,HIGH); //3v pin for buttons.  not nessecary but used for convenence
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop(){
  for(int i=4; i<36; i++){ // loop through all the buttons
    if(digitalRead(i)){
      Serial1.write(i+50); //tell teensy2 to press the button by adding 50
      Serial.write(i+50);
    }else{
      Serial1.write(i); //tell teensy 2 to release the button by leaving just the button number
      Serial.write(i);
    }
  }
}

