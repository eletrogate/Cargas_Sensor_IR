int IR = 13; // nomeando o pino 13 como IR 
int carga = 12; // nomeando o pino 12 como carga 
int sensor ; // variável que armazena o sinal do sensor  
bool estado = 0;// variável que muda o estado do led 
 
/////////////////////////////////

// essa variável bool armazena apenas duas informações verdadeiro ou falso 

////////////////////////////////

void setup()
{
  
  pinMode(carga, OUTPUT);// definindo a carga como saída 
  pinMode(IR, INPUT);// definindo o IR como entrada 
  
  digitalWrite(carga, 0);// inicializando desligada a carga 
  
}

void loop()
{
   sensor = digitalRead(IR); // fazendo a leitura do IR e armazenando na variável sensor
  
  if(sensor == 0)// se o sinal lido for igual a 0 então faça 
  {
    estado = !estado; // inverte o estado da variável (função principal que permite inverte é o !)
    digitalWrite(carga, estado);// aciona de acordo com a variável estado 
    while(sensor == 1);// enquanto o sinal lido for 1 vai executa essas condição 
    delay(1100);
  }
}