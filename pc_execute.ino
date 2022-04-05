#include <EEPROM.h>

int Rotacoes = 0;
int Rotacoes2 = 0;
int Tempo =0;

void setup() {
Serial.begin(9600);

}

void loop() {
Rotacoes = EEPROM.read(1);
Tempo = EEPROM.read(100);
Serial.println("Rotações:");
Serial.println(Rotacoes);
Serial.println("Tempo Decorrido:");
Serial.println(Tempo);
delay(1000);

}
