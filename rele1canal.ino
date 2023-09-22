const int pinoRele = 6; //pino onde esta conectado o rele
const int pinoBotao = 4; //pino onde esta conectado o botao
int lamp = 0;   //declarar variável que controla o estado do módulo relé (liga/desliga)

void setup(){
pinMode(pinoRele, OUTPUT); //define o rele como saída
pinMode(pinoBotao, INPUT); //define o botao como entrada
digitalWrite(pinoRele, HIGH); //indica que o rele inicia desligado
}

void loop(){
//se o botao estiver pressionado (HIGH) e variável lamp for igual a 0 (desligado)
if((digitalRead(pinoBotao) == HIGH) && (lamp == 0)){
digitalWrite(pinoRele, LOW); //liga o módulo relé (acende a lâmpada)
lamp = 1; //variável recebe o valor 1(ligado)
}else{ //se não, botao não pressionado
if((digitalRead(pinoBotao) == LOW) && (lamp == 1)){
//se o botao não estiver pressionado (LOW) e variável lamp for igual a 1 (ligado)
digitalWrite(pinoRele, HIGH); //desliga o módulo relé (apaga a lâmpada)
lamp = 0; //variável recebe o valor 0 (desligado)
}
}
}