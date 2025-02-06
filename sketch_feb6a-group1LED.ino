void setup() {
pinMode(13,OUTPUT);
}

void loop() {
digitalWrite(13,HIGH);
tone(9,440);
delay(3000);
digitalWrite(13,LOW);
noTone(9);
delay(1000);
}
