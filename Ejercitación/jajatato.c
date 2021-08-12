#include <stdio.h>
int triangulo(int base, int altura){
    int area = (base * altura) / 2;
    return area;
}


int main(){
  int base = 0;
  scanf("Introduzca la base %i", &base);
  int altura = 0;
  scanf("Introduzca la altura %i", &altura);
  int area = triangulo(base, altura);
  printf("%i", area);
  return 0;
}
