#include <stdio.h>

// Aqui deberias definir una constante...
const int PERSONAS_POR_RECETA = 10;

int main(){

    int asistentes;
    scanf("%i", &asistentes);
    int si_hay_menos_de_10 = 1;
    int si_hay_mas_de_10 = (asistentes + PERSONAS_POR_RECETA - 1) / PERSONAS_POR_RECETA;

    if (asistentes < 10) {
        printf("%i vez." , si_hay_menos_de_10);
    }
    else {
        printf("%i veces." , si_hay_mas_de_10);
    }
    // Aqui va tu codigo…

    return 0;
}
