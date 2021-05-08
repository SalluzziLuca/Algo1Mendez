#include <stdio.h>
#include <stdbool.h>

const char POLAR = 'I';
const char PANDA = 'P';
const char PARDO = 'G';
const char ANIME = 'A';
const char MUSICA_POP = 'M';
const char LIMPIEZA = 'L';

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



int main() {
  char eleccion_television;
  encuesta_television(&eleccion_television);

  return 0;
}
