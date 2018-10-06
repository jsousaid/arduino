int carRed = 13;
int carYellow = 12;
int carGreen = 11;
int peopleRed = 10;
int peopleGreen = 9;

void setup() {
  pinMode(carRed, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(peopleGreen, OUTPUT);
  pinMode(peopleRed, OUTPUT);

}

void loop() {

  digitalWrite(peopleRed, LOW);

  digitalWrite(carRed, HIGH);
  digitalWrite(peopleGreen, HIGH);
  delay(6000);
  digitalWrite(carRed, LOW);
  digitalWrite(peopleGreen, LOW);
  
  
  digitalWrite(carYellow, HIGH);
  digitalWrite(peopleRed, LOW);

  for(int count =  0; count <= 1000; count = count + 50){
    digitalWrite(peopleRed, HIGH);
    delay(200);
    digitalWrite(peopleRed, LOW);
    delay(200);
  }

  digitalWrite(carYellow, LOW);
  
  digitalWrite(peopleRed, HIGH);
  digitalWrite(carGreen, HIGH);
  delay(6000);
  digitalWrite(carGreen, LOW);

}
