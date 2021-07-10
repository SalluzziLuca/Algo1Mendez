#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


int main() {
  srand (( unsigned)time(NULL));
 int filas[10] ={1, 2, 3, 14, 5, 11, 20, 8, 18, 10};
 int columnas[15] = {1, 15, 3, 4, 5, 25, 7, 8, 9, 10, 21, 28, 17, 11, 14};
 int fil = rand() % 20 + 0;
 int col = rand() % 30 + 0;
for (int j = 0; j < 20; j++) {
  /* code */
   int repetidos = 0;
   int i;
   for(i = 0; i < 10; i++){
    if(fil == filas[i] && col == columnas[i]){
    repetidos++;
    }
    else{
     repetidos = repetidos;
    }
    if(repetidos>0){
        i = 0;
        fil = rand() % 20 + 0;
        col = rand() % 30 + 0;
    }
    else{
      i = i;
    }
   }
   printf("%i\n", fil);
   printf("%i\n", col);
  return 0;
}
}
