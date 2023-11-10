
# Sensor de Movimento + Leds

Esse é o meu primeiro "projeto" usando o Sensor de decteção de Movimento [PIR](https://blogmasterwalkershop.com.br/arduino/como-usar-com-arduino-sensor-pir-detector-de-movimento). 

Esse é o primeiro código, que além de pegar o valor recebido pelo sensor eu faço alguma coisa, no caso, ligo leds vermelhas ao dectectar movimento e sem dectecção de movimento deixo os leds azuis ligados.



## Desafios

Acredito que meus principais desafios nesse projeto foram:
- Receber dados do Sensor [PIR](https://blogmasterwalkershop.com.br/arduino/como-usar-com-arduino-sensor-pir-detector-de-movimento). 
- Ligar múltiplas de maneira simultânea.
## Aprendizados

Por final aprendi algumas coisas interessantes como: 

### Um pouco sobre os componentes

Aprendi um pouco mais sobre a porta GND, antes por falta de conhecimento, costumava utilizar 1 porta dessa por led, sendo assim, ficava inviável.
Aprendi também a repassar justamente o sinal de uma porta dessa para ambos os lados. Assim poupando espaço e portas.

### Recebendo Valor
Embora não tenha sido a "exata" primeira vez que recebi um valor utilizando esse sensor, a primeira vez ainda foi hoje, graças a minha professora que me ajudou, então tudo ainda é novo para mim.
```c++
int pinPIR = 9; // Declarando a porta do PIR

void setup(){
  pinMode(pinPIR, INPUT); // Iniciando o PIR 
  ...
}

void loop(){  

    permitido = (digitalRead(pinPIR)==HIGH); // Verificando se a voltagem é HIGH, ou seja, se detectou sinal.

    if(permitido){
        ...
        // Ligar luz vermelha por 2s. 
    }else{
        ...
        // Ligar luz azul.
    }
}
```

### Ligando as Leds
Essa foi a primeira vez que utilizei as entradas nas laterais da minha protoboard (aquelas com símbolos + e -, e que passam carga de maneira vertical), sendo assim pensei, bom se a carga passa de maneira uniforme por toda ela, se eu adicionar mais leds da maneira correta deve funcionar e de fato funciona!
```c++
int led1 = 2; // Porta dos leds azuis
int led2 = 4; // Porta dos leds vermelhos

void setup(){
  ...
  pinMode(led1, OUTPUT); // Iniciando os leds azuis
  pinMode(led2, OUTPUT); // Iniciando os leds vermelhos
}

void loop(){  

    permitido = (digitalRead(pinPIR)==HIGH);

    if(permitido){
        digitalWrite(led1, HIGH); // Ligando os leds azuis
        digitalWrite(led2, LOW); // Desligando os leds vermelhos
        delay(2000); // Segurando por 2s
    }else{
        digitalWrite(led1, LOW); // Desligando os leds azuis
        digitalWrite(led2, HIGH); // Ligando os leds vermelhos
    }
}
```
# Resultado

![Example](https://youtube.com/shorts/VIrYTjTcueA?feature=share)
## Autores

- [@Victor-Lis](https://github.com/Victor-Lis)

