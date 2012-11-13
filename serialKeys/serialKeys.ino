/*
  Simple converter for the teensy3 wallcade controller till pjrc's teensyduino supports joysticks
  Please see the wallcade_controller for more information
*/

HardwareSerial Serial1 = HardwareSerial(); //setup a physical serial port to recieve codes from
void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() {
  if(Serial1.available()){
    int c=Serial1.read();
    if(c>50){ // if the number is more than 50 we are pressing the button
      c -= 50; // get rid of the 50 marking a buttton press
      Joystick.button(c,1);
      Serial.println(c+" was pressed"); //DEBUG
    }else{
      Joystick.button(c,0); //c is alread the button we want to release
      Serial.println(c+" was released"); //DEBUG
    }
  }
}
