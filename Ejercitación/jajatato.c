#include <stdio.h>

void triangulo();

int main()
{
    triangulo();

    return 0;
}

void triangulo(){
    int base=0;
    int altura=0;
    printf("Introduzca la base:");
    scanf("%i", &base);
    printf("Introduzca la altura:");
    scanf("%i", &altura);
    int area = (base * altura / 2);
    printf("El area del triangulo es: %i",area);
}
