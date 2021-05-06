#include <stdio.h>

void imprimir_codigo(int edad1, int edad2, int edad3) {
    int sumatoria = edad1 + edad2 + edad3;
    printf("%i", sumatoria);
}

int main(){
    int edad_ed;
    scanf("%i", &edad_ed);
    int edad_edd;
    scanf("%i", &edad_edd);
    int edad_eddy;
    scanf("%i", &edad_eddy);

    imprimir_codigo(edad_ed, edad_edd, edad_eddy);

    return 0;
}
