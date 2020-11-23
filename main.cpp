/*
Auto: Rafhael Monteiro
empresa: UPinC.Markers
Exemplos: Acender leds
*/
#include <Arduino.h>

//#include <ESP8266WiFi.h>
int led1 = 5; // GPIO5 do ESP8266 e D1 do NodeMCU
int led2 = 4; // GPIO4 do ESP8266 e D2 do NodeMCU
int led3 = 0; // GPIO0 do ESP8266 e D3 do NodeMCU
int led4 = 2; // GPIO2 do ESP8266 e D4 do NodeMCU
int led5 = 14; // GPIO14 do ESP8266 e D5 do NodeMCU
int led6 = 12; // GPIO12 do ESP8266 e D6 do NodeMCU
void setup() {
  // configuração de pinos de saida para os leds
  pinMode(led1, OUTPUT); 
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
}

void loop() {
  // Codigo principal
  
  digitalWrite(led6, HIGH); // Liga o LED
  delay(1000); // Espera um segundos
  digitalWrite(led5, HIGH); // Liga o LED
  delay(1000); // Espera um segundos
  digitalWrite(led4, HIGH); // Liga o LED
  delay(1000); // Espera um segundos
  digitalWrite(led3,HIGH); // Liga o LED
  delay(1000); // Espera um segundos
  digitalWrite(led2,HIGH); // Liga o LED
  delay(1000); // Espera um segundos
  digitalWrite(led1,HIGH); // Liga o LED
  delay(1000); // Espera um segundos

  digitalWrite(led1, LOW); // Desliga o LED
  digitalWrite(led2, LOW); // Desliga o LED
  digitalWrite(led3,LOW); // Desliga o LED
  digitalWrite(led4,LOW); // Desliga o LED
  digitalWrite(led5,LOW); // Desliga o LED
  digitalWrite(led6,LOW); // Desliga o LED
  delay(1000); // Espera um segundo
}