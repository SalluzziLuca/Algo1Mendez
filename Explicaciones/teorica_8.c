#include <stdio.h>

// burbujeo
int main() {
  int tope=3;
  for(int i=0, i<= tope; i++){
    for(int j=0, j< tope-1; j++){
      if(vector[j]>vector[j+1]){
        int auxiliar;
        auxiliar =vector[j];
        vector[j]=vector[j+1];
        vector[j+1]=auxiliar;
      }
    }
  }

  return 0;
}
