#define ledGreen 2
#define ledRed 5
#define buttonSpeedUp 7
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonSpeedUp, INPUT);
  digitalWrite(buttonSpeedUp, HIGH);

  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void speedMode(int option){
  if(option == 1){
    digitalWrite(ledGreen, HIGH);
    delay(100);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, HIGH);
    delay(100);
    digitalWrite(ledRed, LOW);
  }else{
    digitalWrite(ledGreen, HIGH);
    delay(500);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, HIGH);
    delay(500);
    digitalWrite(ledRed, LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int isButtonPressed = digitalRead(buttonSpeedUp);

  if(isButtonPressed == 0){
    speedMode(1);
  }else{
    speedMode(0);
  }
  
}
