#include <stdio.h>

#define MINIMAS_VECES_CACA 1

const int MAXIMAS_VECES_CACA = 100;

bool es_cantidad_caca_valido(int bolsas){
  if (bolsas < MINIMAS_VECES_CACA || bolsas > MAXIMAS_VECES_CACA){
    return false;
    }
    else{
      return true;
    }
}

int cantidad_rollitos (int bolsas_por_dia, int dias, int bolsas_por_rollitos){
  int rollitos = ((bolsas_por_dia * dias / bolsas_por_rollito))
}

int int main(){

int bolsas_diarias;
int dias = 180;
int bolsas_por_rollito = 100;
  printf("Cuantas veces por dia hace caca Alma?");
  scanf("%i", %bolsas_diarias);

  while (!es_cantidad_caca_valido(bolsas_diarias) ) {
    printf("Dale charly, mandale uno entre %i-%i no seas gato", MINIMAS_VECES_CACA, MAXIMAS_VECES_CACA);
    scanf("%i",&bolsas_diarias);
    /* code */
  }

  return 0;
}
