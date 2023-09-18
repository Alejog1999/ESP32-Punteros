#include <Arduino.h>

String Leer_serial="0";

void setup() {
  Serial.begin(115200);
  int arreglo[5] = {10, 20, 30, 40, 50};
  int *puntero = arreglo; 
  int *puntero2 = &arreglo[2]; 
  Serial.println("Bienvenido al sistema");
  Serial.println("1)Realizar cambio de un digito del arreglo (10, 20, 30, 40, 50)");
  Serial.println("2)Salir");
  Serial.println("Seleccione una opcion valida: ");
  while(Leer_serial!="1" && Leer_serial!="2"){
    if(Serial.available()){
    Leer_serial = Serial.read();
    delay(10);
    Serial.println(Leer_serial);
    if(Leer_serial=="1"){
      Serial.println("Elementos del arreglo usando punteros:");
      for (int i = 0; i < 5; i++) {
        Serial.println(*puntero);
        puntero++; 
      }
      *puntero2 = 99; 
      Serial.println("Arreglo después de modificar el tercer elemento:");
      for (int i = 0; i < 5; i++) {
        Serial.println(arreglo[i]);
        
      }
      Serial.println("Gracias por participar");  
    }else{
      Serial.println("Gracias por participar");
    }
  }
 }
}

void loop() {
}
