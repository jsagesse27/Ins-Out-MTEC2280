int potPin = 1;
int speakerPin = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(potPin);
  int mappedval = map(val, 0, 990, 50, 2);
  Serial.println(mappedval);

  for (int i = 0; i < 1000; i += 10) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(i);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(i);
  }
  delay(mappedval);
}
