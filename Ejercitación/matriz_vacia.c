#include <stdio.h>
int main() {
  char terreno[20][30];
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 30; j++) {
      terreno[i][j]= ' ';
    }
  }
  
  for (int i = 0; i < 20; i++){
    for (int j = 0; j < 30; j++){
      printf("[%c]", terreno[i][j]);
    }
    printf("\n");
  }
  printf("\n\n");
  return 0;
}
