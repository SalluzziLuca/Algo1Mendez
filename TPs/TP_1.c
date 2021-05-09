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

void encuesta_piso(int* eleccion_piso){
    printf("e compras una torre con tus dos hermanos de 18 pisos. ¿En que piso te gustaría vivir?\n", BAMBU, PESCADO, FOCAS);
    scanf(" %c", eleccion_alimento);

}


int main() {
  char eleccion_television;
  char eleccion_alimento;
  encuesta_television(&eleccion_television);
  encuesta_alimento(&eleccion_alimento);


  return 0;
}
