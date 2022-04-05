#include <EEPROM.h>

int Rotacoes = 0;
int reedpin = 13;
int adress = 1;
int tempo = 0;
 

void setup() {
  
pinMode(13, INPUT); 
Serial.begin(9600);
}


void loop() {
 tempo = tempo+1;
Serial.println(Rotacoes); 
EEPROM.write (100, tempo);
if(digitalRead (reedpin) == HIGH){
Rotacoes = Rotacoes +1;
}
delay(100); 
if (Rotacoes > 1){
  EEPROM.write (adress, Rotacoes);

}

}
