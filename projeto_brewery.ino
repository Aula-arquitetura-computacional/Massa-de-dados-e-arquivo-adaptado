const int lm35 = A0;
float temperatura;

void setup() {
Serial.begin(9600);
}

void loop() {
int leitura = analogRead(lm35);
float dadoMaceracao = analogRead(lm35);
float dadoMalteacao_1 = analogRead(lm35);
float dadoMalteacao_2 = analogRead(lm35);
float dadoMalteacao_3 = analogRead(lm35);
float dadoMoagem = analogRead(lm35);
float dadoBrassagem_1 = analogRead(lm35);
float dadoBrassagem_2 = analogRead(lm35);
float dadoBrassagem_3 = analogRead(lm35);
float dadoFervura = analogRead(lm35);
float dadoResfriamento_1 = analogRead(lm35);
float dadoResfriamento_2 = analogRead(lm35);
float dadoResfriamento_3 = analogRead(lm35);
float dadoFiltragem = analogRead(lm35);
float dadoPasteurizacao = analogRead(lm35);
float dadoTunel = analogRead(lm35);

temperatura = (5.0 / 1023) * leitura * 100;

dadoMaceracao = (0.4 * leitura) + 3;
dadoMalteacao_1 = (0.26 * leitura) + 42.2;
dadoMalteacao_2 = (0.66 * leitura) + 55.2;
dadoMalteacao_3 = (2 * leitura) + 30;
dadoMoagem = (1.33 * leitura) + 32.1;
dadoBrassagem_1 = (0.66 * leitura) + 20.2;
dadoBrassagem_2 = (2 * leitura) + 10;
dadoBrassagem_3 = (0.66 * leitura) + 47.2;
dadoFervura = (0.26 * leitura) + 94.2;
dadoResfriamento_1 = (0.66 * leitura) - 7.8;
dadoResfriamento_2 = (0.66 * leitura) - 2.8;
dadoResfriamento_3 = (0.26 * leitura) - 1.8;
dadoFiltragem = (0.26 * leitura) - 5.8;
dadoPasteurizacao = (1.33 * leitura) + 30.1;
dadoTunel = (0.66 * leitura) - 12.8;

Serial.print("Temperatura:");
Serial.print(temperatura);
Serial.print(", ");
Serial.print(dadoMaceracao);
Serial.print(", ");
Serial.print(dadoMalteacao_1);
Serial.print(", ");
Serial.print(dadoMalteacao_2);
Serial.print(", ");
Serial.print(dadoMalteacao_3);
Serial.print(", ");
Serial.print(dadoMoagem);
Serial.print(", ");
Serial.print(dadoBrassagem_1);
Serial.print(", ");
Serial.print(dadoBrassagem_2);
Serial.print(", ");
Serial.print(dadoBrassagem_3);
Serial.print(", ");
Serial.print(dadoFervura);
Serial.print(", ");
Serial.print(dadoResfriamento_1);
Serial.print(", ");
Serial.print(dadoResfriamento_2);
Serial.print(", ");
Serial.print(dadoResfriamento_3);
Serial.print(", ");
Serial.print(dadoFiltragem);
Serial.print(", ");
Serial.print(dadoPasteurizacao);
Serial.print(", ");
Serial.println(dadoTunel);

delay(200);
}
