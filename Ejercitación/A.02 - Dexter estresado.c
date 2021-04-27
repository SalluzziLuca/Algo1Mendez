#include <stdio.h>

// Aqui deberias definir una constante que represente
// cuantos pelos se le cae cada vez que se toca la cabeza...
const int PELOS_PERDIDOS = 78;

int main(){
    int veces;
    scanf("hola: %i", &veces);
    int resultado;
    resultado = veces * PELOS_PERDIDOS;
    printf("%i", resultado);    // Aqui va tu codigo...

    return 0;
}
