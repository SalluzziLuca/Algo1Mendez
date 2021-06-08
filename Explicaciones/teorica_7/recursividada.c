#include <stdio.h>
long factorial(int un_numero){
  if (un_numero == 0)
  return 1;
  else
  return un_numero * factorial(un_numero-1);
}
 int main() {
   int numero = 0;
   scanf("%i", numero);
   numero = factorial(numero);
   printf("%i", numero);
   return 0;
 }
