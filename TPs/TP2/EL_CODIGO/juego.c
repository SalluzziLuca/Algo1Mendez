#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include "test_de_personalidad.h"
#include "osos_contra_reloj.h"
#include "utiles.h"


 const char ERROR = 'E';
 const char POLAR = 'I';
 const char PANDA = 'P';
 const char PARDO = 'G';
 const int ALTO = 20;
 const int ANCHO = 30;




int main(){
  srand (( unsigned)time(NULL));
  juego_t juego;
  char tipo_personaje;
  test_de_personalidad(&tipo_personaje);
  inicializar_juego(&juego, tipo_personaje);
  mostrar_juego(juego);

  return 0;
}
