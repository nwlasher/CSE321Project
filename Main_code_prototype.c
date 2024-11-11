#define TRIGGER 35 //Output value when the sensor is NOT triggered by manufacturer definition, I've inverted it here.
//Init I/O pins
int leftMotorPin = 4;
int rightMotorPin = 2;
int leftIrPin = A4;
int rightIrPin = A5;
void setup() {
  //Initialize IR pins for input
  pinMode(leftIrPin, INPUT);
  pinMode(rightIrPin, INPUT);
  //Initialize LED pins for output
  pinMode(leftMotorPin, OUTPUT);
  pinMode(rightMotorPin, OUTPUT);
//  Serial.begin(9600);
}

void loop() {
  if((analogRead(rightIrPin) > TRIGGER) && (analogRead(leftIrPin) > TRIGGER)){//End tile found or device removed from course
      digitalWrite(leftMotorPin, LOW);
      digitalWrite(rightMotorPin, LOW);
  }else if (analogRead(rightIrPin) > TRIGGER){//Adjust direction left
      digitalWrite(rightMotorPin, LOW);
      digitalWrite(leftMotorPin, HIGH);
  }else if (analogRead(leftIrPin) > TRIGGER){//Adjust direction right
      digitalWrite(leftMotorPin, LOW);
      digitalWrite(rightMotorPin, HIGH);
  }else{//Continue forward
      digitalWrite(leftMotorPin, HIGH);  
      digitalWrite(rightMotorPin, HIGH);
  }
  

  
//  //Monitor state here
//  Serial.print("Right: ");
//  Serial.print(rightObjectProximity);
//  Serial.print(" Left: ");
//  Serial.print(leftObjectProximity);
//  Serial.print("\n");
//  delay(100);
}
