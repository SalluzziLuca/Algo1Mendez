#include <stdio.h>
#define MAXIMO_VALOR 10

void mostrar_arreglo(int un_arreglo[], int tope){
  int i;
   for(i=0;i<tope;i++){
     printf("%i",un_arreglo[i] );
   }
}

int main() {
  int mi_array[MAXIMO_VALOR];

  int tope = 0;
  mi_array[0] = 1;
  mi_array[1] = 2;
  tope = 2; //si modifico aca el tope, "mostrar_arreglo" va a imprimir por pantalla hasta donde yo le diga, si tenemos más topes que valores asignados, vamos a estar imprimiendo basssura

  //otra forma de hacerlo
  mi_array[tope] = 3;
  tope++;
  mostrar_arreglo(mi_array, tope);

  return 0;
}
