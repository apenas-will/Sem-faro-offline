// Indica quais leds serão utilizados pelo programa
void setup() {
  pinMode(16, OUTPUT); // Led vermelho
  pinMode(17, OUTPUT); // Led amarelo
  pinMode(18, OUTPUT); // Led verde
}

// Define função que faz o led acender por um intervalo determinado e depois apagar
void blink(int pin, int interval) { 
  digitalWrite(pin, HIGH); // Acende led do pino determinado
  delay(interval); // Mantém o led aceso por um intervalo determinado
  digitalWrite(pin, LOW); // Apaga led do pino determinado
}

void loop(){
  blink(16, 6000); // Faz led vermelho acender por 6 segundos
  blink(17, 2000); // Faz led amarelo acender por 2 segundos
  blink(18, 2000); // Faz led verde acender por 2 segundos
  blink(18, 2000); // Faz led verde acender por mais 2 segundos (simulando um tempo adicional para pedestres terminarem a travessia)
  blink(17, 2000); // Faz led amarelo acender por 2 segundos
}
