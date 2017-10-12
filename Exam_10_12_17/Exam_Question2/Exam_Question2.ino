// global variables
int counter = 0;
int buttonPin = 2;
int prevButtonState = 1;
int ledPin = 3;
int speakerPin = 4;
int potPin = 1;

void setup() {
  Serial.begin(9600);

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {


  int buttonState = digitalRead(buttonPin);


  if(buttonState == 0 && prevButtonState == 1) {
    digitalWrite(ledPin, LOW);
    delay(50);
  }
   if(buttonState == 0) {
    Serial.println("state has changed");
    digitalWrite(ledPin, HIGH);
    delay(50);
    digitalWrite(ledPin, LOW);
    delay(50);
  }


  prevButtonState = buttonState;
}
