#include <stdio.h>
#define MAXIMO_VALOR 10
/* Cuando i es igual a 0, y mientras i sea menor que 10, le asignamos a cada valor del array "0" y sumamos i++ */
void modificar_valor_array(int un_arreglo[]){
  int i;
   for(i=0;i<MAXIMO_VALOR;i++){
     un_arreglo[i]=0;
   }
}

void mostrar_arreglo(int un_arreglo[]){
  int i;
   for(i=0;i<MAXIMO_VALOR;i++){
     printf("%s",un_arreglo[i] );
   }
}

int main() {
  int mi_array[MAXIMO_VALOR];

  modificar_valor_array(mi_array);
  mostrar_arreglo(mi_array);

  return 0;
}
