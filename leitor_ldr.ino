/*

*/

const int pinoLDR = A0;
const int ledLuzFraca = 10;
const int ledLuzNormal = 9;
const int ledLuzAlta = 8;

int valorLidoLDR = 0;
float tensao = 0.0;

void setup() {

  // Estou falando para o Arduíno que eu vou coletar ou escrever dados nele utilizando a porta serial, ou seja, atráves do cabo USB.
  Serial.begin(9600);

  pinMode(pinoLDR, INPUT);
  pinMode(ledLuzFraca, OUTPUT);
  pinMode(ledLuzNormal, OUTPUT);
  pinMode(ledLuzAlta, OUTPUT);
  
}

void loop() {
  valorLidoLDR = analogRead(pinoLDR);
  tensao = valorLidoLDR * 5.0 / 1023.0;
  
  Serial.print("Valor lido: ");
  Serial.print(valorLidoLDR);
  Serial.print("\t");
  Serial.print("Tensao: ");
  Serial.print(tensao);
  Serial.print("V");
  Serial.print("\n");
  
  if (valorLidoLDR < 100){
    digitalWrite(ledLuzNormal, LOW);
    digitalWrite(ledLuzAlta, LOW);
    digitalWrite(ledLuzFraca, HIGH);
  }
  else if(valorLidoLDR >= 80 && valorLidoLDR < 300){
    digitalWrite(ledLuzAlta, LOW);
    digitalWrite(ledLuzFraca, LOW);
    digitalWrite(ledLuzNormal, HIGH);
  }
  else{
    digitalWrite(ledLuzFraca, LOW);
    digitalWrite(ledLuzNormal, LOW);
    digitalWrite(ledLuzAlta, HIGH);
  }
  // delay(1000);
}
