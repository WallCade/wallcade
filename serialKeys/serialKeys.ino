/* Simple USB Keyboard Example
   Teensy becomes a USB keyboard and types characters

   You must select Keyboard from the "Tools > USB Type" menu

   This example code is in the public domain.
*/

HardwareSerial Serial1 = HardwareSerial();
void setup() {
  Serial1.begin(9600);
  delay(1000);
}

void loop() {
  // Your computer will receive these characters from a USB keyboard.
  while(Serial1.available()){
    char c = Serial1.read();
    Keyboard.print(c);
  }
}
