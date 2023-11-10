// (Vendo de cima, do lado dos pinos)
// Pino Esquerdo: GND
// Pino do Meio: Porta ~9
// Pino Direito: 5v

int pinPIR = 9; 
int led1 = 2; // Porta do led azul
int led2 = 4; // Porta do led vermelho
bool permitido = false;

void setup(){
  pinMode(pinPIR, INPUT);
  pinMode(led1, OUTPUT);
  Serial.begin(9600);
}

void loop(){  

    permitido = (digitalRead(pinPIR)==HIGH);

    if(permitido){
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        delay(2000);
    }else{
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);  
    }
}
