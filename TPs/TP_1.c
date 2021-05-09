#include <stdio.h>
#include <stdbool.h>

const char POLAR = 'I';
const char PANDA = 'P';
const char PARDO = 'G';
const char ANIME = 'A';
const char MUSICA_POP = 'M';
const char LIMPIEZA = 'L';
const char BAMBU = 'B';
const char PESCADO = 'P';
const char FOCAS = 'F';
const int PISO_MINIMO = 0;
const int PISO_MAXIMO = 18;
const int GRITO_MINIMO = 0;
const int GRITO_MAXIMO = 18;


bool es_canal_valido (char eleccion_television){
      return (eleccion_television != ANIME  && eleccion_television != MUSICA_POP && eleccion_television != LIMPIEZA);
}


void encuesta_television(char* eleccion_television){
  printf("Vas a ver televisión un rato, pones el canal de: Anime (%c), Musica Pop (%c), Limpieza (%c).\n", ANIME, MUSICA_POP, LIMPIEZA );
  scanf(" %c", eleccion_television);

  while (es_canal_valido(*eleccion_television)){
		printf("Letra no valida, ingresar Anime (%c), Musica Pop (%c) o Limpieza (%c).\n", ANIME, MUSICA_POP, LIMPIEZA);
		scanf(" %c", eleccion_television);
	}
}

bool es_alimento_valido (char eleccion_alimento){
  return (eleccion_alimento != BAMBU  && eleccion_alimento != PESCADO && eleccion_alimento != FOCAS);
}
void encuesta_alimento(char* eleccion_alimento){
  printf("Solo podes guardar un alimento en tu vianda: Bambú (%c), Pescado (%c), Focas (%c).\n", BAMBU, PESCADO, FOCAS);
  scanf(" %c", eleccion_alimento);

  while (es_alimento_valido(*eleccion_alimento)) {
    printf("Letra no valida, ingresar Bambu (%c), Pescado (%c) o Focas (%c).\n", BAMBU, PESCADO, FOCAS);
		scanf(" %c", eleccion_alimento);
  }
}

bool es_piso_valido (int eleccion_piso){
  return (eleccion_piso < PISO_MINIMO || eleccion_piso > PISO_MAXIMO);
}

void encuesta_piso(int* eleccion_piso){
    printf("Te compras una torre con tus dos hermanos de 18 pisos. ¿En que piso te gustaría vivir?\n");
    scanf(" %i", eleccion_piso);

    while(es_piso_valido(*eleccion_piso)){
      printf("Ese piso no existe, elegi entre %i y %i \n", PISO_MAXIMO, PISO_MINIMO);
      scanf("%i\n", eleccion_piso);
    }
}

bool es_grito_valido (int eleccion_grito){
  return (eleccion_grito < GRITO_MINIMO || eleccion_grito > GRITO_MAXIMO);
}

void encuesta_grito (int* eleccion_grito){
  printf("¡Oh, una rata! ¿Que tan fuerte gritas del %i al %i? Siendo %i no gritar y %i desgarrarse la garganta.\n", GRITO_MINIMO, GRITO_MAXIMO, GRITO_MINIMO, GRITO_MAXIMO);
  scanf(" %i", eleccion_grito);
  while (es_grito_valido(*eleccion_grito)) {
    printf("No podes elegir esa opcion, tiene que ser entre %i y %i \n", GRITO_MINIMO, GRITO_MAXIMO);
    scanf(" %i", eleccion_grito);
  }

}


int main(){
  char eleccion_television;
  char eleccion_alimento;
  int eleccion_piso = 0;
  int eleccion_grito = 0;
  encuesta_television(&eleccion_television);
  encuesta_alimento(&eleccion_alimento);
  encuesta_piso(&eleccion_piso);
  encuesta_grito(&eleccion_grito);

  return 0;
}
