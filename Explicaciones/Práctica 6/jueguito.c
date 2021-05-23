#include <stdio.h>
typedef struct juego {
    int distancia;
    int pan_pie;
    char pan_inicial;
    int queso_pie;
    char queso_inicial;
} juego_t;

void inicializar_juego(juego_t* juego) {
  (*juego).distancia = DISTANCIA_INICIAL;
  printf("Pan, decime el largo de tu pie: ");
  int numero;
  scanf("%i", &((juego*).pan_pie));
  printf("Pan, decime el largo de tu pie: ");
  int numero;
  scanf("%i", &((juego*).pan_inicial));
  printf("Queso, decime el largo de tu pie: ");
  int numero;
  scanf("%i", &((juego*).queso_pie));
  printf("Queso, decime el largo de tu pie: ");
  int numero;
  scanf("%i", &((juego*).queso_inicial));

}
void jugar_turno(juego_t* juego) {
  /* code */
  juego->distancia = juego->distancia - juego->pan_pie;
  (*juego).distancia = (*juego).distancia - (*juego).queso_pie;

  if (juego->distancia > 0) {
    juego->distancia = juego->distancia - juego->queso_pie;
    juego->ultima_jugada = juego->queso_inicial;
    /* code */
  }


}

int main(){
  juego_t jueguito;
  inicializar_juego(&jueguito);

  while(jueguito.distancia > 0){
    juagar_turno(&jueguito);
  }

  printf("Ganó: %c\n")
}
