/*
Auto: Rafhael Monteiro
UPinC.Markers
Exemplos: leds RGB
*/
#include <Arduino.h>

int led_R = 4; 
int led_G = 3;     
int led_B = 2;      
  
void setup() {
  // configuração de pinos de saida para os leds
  pinMode(led_R, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT);  
}

void loop() {
  // Vermelho
  digitalWrite(led_B, LOW); // led azul
  digitalWrite(led_G,LOW); // led verde
  digitalWrite(led_R, HIGH);  // led vermelho
  delay(1000);
/*
  digitalWrite(led_B, LOW); // led azul
  digitalWrite(led_G, LOW); // led verde
  digitalWrite(led_R, LOW);  // led vermelho
  delay(3000);
*/

  // Verde
  digitalWrite(led_B, LOW); // led azul
  digitalWrite(led_G, HIGH); // led verde
  digitalWrite(led_R, LOW);  // led vermelho
  delay(1000);

  // Azul
  digitalWrite(led_B, HIGH); // led azul
  digitalWrite(led_G, LOW); // led verde
  digitalWrite(led_R, LOW);  // led vermelho
  delay(1000);
  
  // Branco
  digitalWrite(led_B, HIGH); // led azul
  digitalWrite(led_G, HIGH); // led verde
  digitalWrite(led_R, HIGH);  // led vermelho
  delay(1000);
  
}