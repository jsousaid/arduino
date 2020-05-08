/*

*/
const int pinBuzzer = 10;
const int pinLDR = A0;
const int frequencia = 2000;

int valorLidoLDR = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinLDR, INPUT);
}

void loop() {
  valorLidoLDR = analogRead(pinLDR);

  Serial.print("Valor lido: ");
  Serial.print(valorLidoLDR);
  Serial.print("\n");
  
    if(valorLidoLDR < 600){
      tone(pinBuzzer, frequencia);
    } else {
      noTone(pinBuzzer);
    }
}

