#include <stdio.h>
const char CONTENTO = 'C';
const char MEH = 'C';
const char TRISTE = 'T';

const char PRIMAVERA = 'P';
const char VERANO = 'V';
const char OTONIO = 'O';
const char INVIERNO = 'I';

int definir_humor_osos(char* humor_panda, char* humor_pardo, char* humor_polar, char estacion){
      int* cantidad_de_contentos = 0;
      if(estacion == PRIMAVERA){
        *humor_panda = CONTENTO;
        *humor_pardo = CONTENTO;
        *humor_polar = MEH;
        cantidad_de_contentos = 2;
    }
    else if(estacion == VERANO){
        *humor_panda = MEH;
        *humor_pardo = CONTENTO;
        *humor_polar = TRISTE;
        cantidad_de_contentos = 1;
    }
    else if(estacion == OTONIO){
        *humor_panda = CONTENTO;
        *humor_pardo = CONTENTO;
        *humor_polar = CONTENTO;
        cantidad_de_contentos = 3;
    }
    else if(estacion == INVIERNO){
        *humor_panda = MEH;
        *humor_pardo = TRISTE;
        *humor_polar = CONTENTO;
        cantidad_de_contentos = 1;
    }
     return cantidad_de_contentos;
}
