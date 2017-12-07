#include <Servo.h>

// create an instance of the Servo object
int counter = 0;
int prevButtonState = 1;

Servo clawS;
Servo horzS;
Servo vertS;

int poth = A0;
int potv = A1; 
int button = 7;
int claw = 9;
int horz = 6;
int vert = 5;

void setup() {
  // analog pins dont need to be set up
  Serial.begin(9600);
  // prep the servo for use
  clawS.attach(claw);
  horzS.attach(horz);
  vertS.attach(vert);

    pinMode(button, INPUT_PULLUP);
}

void loop() {
  // read the potentiometer and store to val
  //int valc = analogRead(claw);
  int valh = analogRead(poth);
  int valv = analogRead(potv);
  //int valb = digitalRead(buttonPin);
  

  // convert the range to 0->180
//  valc = map(valc, 0, 1023, 0, 180);
  //Serial.println(valc);
   valh = map(valh, 0, 1023, 0, 180);
  Serial.println(valh);
   valv = map(valv, 0, 1023, 0, 180);
  Serial.println(valv);

  // rotate the servo!
  horzS.write(valh);

  delay(5);

  //button code
  int buttonState = digitalRead(button);

  // we only want to know if the button is CURRENTLY down
  // and was PREVIOUSLY up
  if(buttonState == 0 && prevButtonState == 1) {
    Serial.println("state has changed");
  }

  // reset previous state
  prevButtonState = buttonState;
  
}

