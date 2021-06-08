#include <stdio.h>
long factorial(unsigned int un_numero){ //unisgned porque solo toma numeros positivos
  if (un_numero == 0) //caso base!!!!
  return 1;
  else
  return un_numero * factorial(un_numero-1); //la fucnion usa a la misma funcion hasta que un_numero== 0 y se corta
}
 int main() {
  int numero = 0;
  scanf("%d", &numero);

   printf("%li \n", factorial(numero));
   return 0;
 }
