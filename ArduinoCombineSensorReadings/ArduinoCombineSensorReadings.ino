
void setup() {
  //start serial connection
  
  //delay(3000);
  //Serial.begin(9600);
  
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

  pinMode(10, OUTPUT);
  digitalWrite(10,HIGH);

  pinMode(8, INPUT);
}

int sensorVal;
int switchVal;

void loop() {
  //read the pushbutton value into a variable
  int sensorVal = digitalRead(2);
  int switchVal = digitalRead(8);
  
  //print out the value of the pushbutton
  //Serial.print(sensorVal);
  //Serial.print(" ");
  //Serial.println(switchVal);

  // Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
  // HIGH when it's open, and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
  if (sensorVal == 0 || switchVal == 0 ) {
    digitalWrite(13, LOW);
    //digitalWrite(12, LOW);
    pinMode(12, INPUT);
  } else {
    digitalWrite(13, HIGH);
    pinMode(12, OUTPUT);
    digitalWrite(12, HIGH);
  }

  //delay(1000);
}
