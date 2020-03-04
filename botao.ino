//Quando o botão eh pressionado o botao fica aceso, e quando eh solto o botao se apaga.
int inputBtn = 9;
int outputBtn = 12;

void setup() {
  pinMode(inputBtn, INPUT);
  pinMode(outputBtn, OUTPUT);
}

void loop() {
  if(digitalRead(inputBtn) == HIGH)
    digitalWrite(outputBtn, LOW);
   else
    digitalWrite(outputBtn, HIGH);
}
