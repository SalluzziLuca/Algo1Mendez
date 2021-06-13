#include <stdio.h>
#include <stdbool.h>
#include "test_de_personalidad.h"
#include "osos_contra_reloj.h"
#include "utiles.h"

const int ALTO = 20;
const int ANCHO = 30;


void inicializar_matriz(char terreno[ALTO][ANCHO]){
  for(int i = 0; i < ALTO; i++){
    for(int j = 0; j < ANCHO; j++){
      terreno[i][j] = '.';
    }
  }
}
void mostrar_terreno(char terreno[ALTO][ANCHO]){
  for(int i = 0; i < ALTO; i++){
    for(int j = 0; j < ANCHO; j++){
      printf("%c", terreno[i][j]);
    }
    printf("\n");
  }
  printf("\n\n");
}


int main(){

  char terreno[ALTO][ANCHO];
  inicializar_matriz(terreno);
  mostrar_terreno(terreno);

    char personalidad_detectada;
  test_de_personalidad(&personalidad_detectada);


  if(personalidad_detectada == POLAR){
     // va a tener 6 velas en total, 10 usos de linterna y las piedras no le restan tiempo
  }
  if(personalidad_detectada == PANDA){
     // va a tener 2 bengalas en total, 3 velas y 10 usos de linterna
  }
  if(personalidad_detectada == PARDO){
    // va a tener 4 velas y 15 usos de linterna y los arboles le restan 0,5 segundos (en vez de 1)
  }


  return 0;
}
