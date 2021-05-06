#include <stdio.h>
#include <stdbool.h>

const int NUMERO_MAXIMO = 10;
const int NUMERO_MINIMO = 1;

void preguntar_numero (int nuumero_recibido){
    printf("Decime un numero del 1 al 10");
    scanf(" %i", &numero_recibido);
}
bool tiene_pubertad( int numero) {
    return (numero <= NUMERO_MINIMO && numero >= NUMERO_MAXIMO);
}
int main (){
  int numero_recibido;
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
