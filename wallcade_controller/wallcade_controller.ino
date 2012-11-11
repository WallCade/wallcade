String stringOne="0123456789abcdefghijklmno";
char charBuf[37];

void setup(){
  for(int i=8; i<33; i++){
    pinMode(i,INPUT);
  };
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(2,OUTPUT);
  digitalWrite(2,HIGH);
  Serial.begin(9600);
  Serial1.begin(9600);
  stringOne.toCharArray(charBuf, 37);
}

void loop(){
  for(int i=8; i<33; i++){
    if(!digitalRead(i)){
      int j=i-8;
      Serial.print(charBuf[j]);
      Serial1.print(charBuf[j]);
    }
  }
  if(!digitalRead(4)){
    Serial.print('p');
    Serial1.print('p');
  }
  if(!digitalRead(5)){
    Serial.print('q');
    Serial1.print('q');
  }
  delay(90);
}

