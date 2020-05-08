/*

*/

int frequenciaInicial = 2000;
int pinoBuzzer = 11;
int pinoAumentaFrequencia = 10;
int pinoDecrementaFrequencia = 9;

void setup() {
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoAumentaFrequencia, INPUT_PULLUP);
  pinMode(pinoDecrementaFrequencia, INPUT_PULLUP);
}

void loop() {

  
  if(digitalRead(pinoAumentaFrequencia) == LOW){
    frequenciaInicial += 100;
  }
  
  if(digitalRead(pinoDecrementaFrequencia) == LOW){
    frequenciaInicial -= 100;
  }
  
    
  tone(pinoBuzzer, frequenciaInicial); // gera frequencia no buzzer
  delay(1000);
  noTone(pinoBuzzer); // para frequencia no buzzer
  delay(1000);
  
    
}

