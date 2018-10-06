// the setup function runs once when you press reset or power the board

//LED_BUILTIN é uma constante criada, que indica o que o pino esta conectado por default no pino 13.
//Definindo abaixo que será um OUTPUT, ou seja, uma saída.


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever

//HIGH manda 5V para o pino definido no primeiro arg da funcao, pino 13.
//LOW manda 0V para o pino definido no primeiro arg da funcao, pino 13.
//Tempo na funcao 'delay' é definido em milisegundos.
void loop() {
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
