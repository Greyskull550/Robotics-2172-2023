#define potRotate A0
#define potUp A1
#define potExtend A2
#define potElbow A3
#define potWrist A4
#define potFinger A5
#define servoRotate 3
#define servoUp 5
#define servoExtend 6
#define servoElbow 9
#define servoWrist 10
#define servoFinger 11

int rotateVal = 0;
int upVal = 0;
int extendVal = 0;
int elbowVal = 0;
int wristVal = 0;
int fingerVal = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potRotate, INPUT);
  pinMode(potUp, INPUT);
  pinMode(potExtend, INPUT);
  pinMode(potElbow, INPUT);
  pinMode(potWrist, INPUT);
  pinMode(potFinger, INPUT);
  pinMode(servoRotate, OUTPUT);
  pinMode(servoUp, OUTPUT);
  pinMode(servoExtend, OUTPUT);
  pinMode(servoElbow, OUTPUT);
  pinMode(servoWrist, OUTPUT);
  pinMode(servoFinger, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  /*rotateVal = analogRead(potRotate);
  Serial.print("ROTATE ");
  Serial.println(rotateVal);
  */
  /*
  upVal = analogRead(potUp);
  Serial.print("UP ");
  Serial.println(upVal);
  */
  /*
  extendVal = analogRead(potExtend);
  Serial.print("EXTEND ");
  Serial.println(extendVal);
*/
  
  elbowVal = analogRead(potElbow);
  Serial.print("ELBOW ");
  Serial.println(elbowVal);
  
  /*
  wristVal = analogRead(potWrist);
  Serial.print("WRIST ");
  Serial.println(wristVal);
  */
  /*
  fingerVal = analogRead(potFinger);
  Serial.print("FINGER ");
  Serial.println(fingerVal);
  */
  delay(1000);
}
