#include <stdio.h>
#include <stdbool.h>

const int NUMERO_MAXIMO = 10;
const int NUMERO_MINIMO = 1;

void preguntar_numero (int numero_recibido){
<<<<<<< HEAD:Ejercitación/B.02.c
    printf("Decime un numero del 1 al 10 \n");
=======
    printf("Decime un numero del 1 al 10");
>>>>>>> 784d598ab875827e7de237210e96ad3ac63a9708:Ejercitación/B.02.C
    scanf(" %i", &numero_recibido);
}
bool tiene_pubertad( int numero) {
    return (numero <= NUMERO_MINIMO && numero >= NUMERO_MAXIMO);
}
int main (){
  int numero_recibido = 0;
  bool pubertad;
  preguntar_numero(numero_recibido);
  pubertad =  tiene_pubertad(numero_recibido);
  if (pubertad == true){
    printf("true");
  }
  else {
    printf("false");
  }
return 0;
}
