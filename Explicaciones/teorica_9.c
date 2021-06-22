#define <stdio.h>
void mezcla(array[], array_2[], array_final[]){
int i = 0;
int j = 0;
int k = 0;
while(i < 5 && j < 3){
      if(array[i]>array_2[j]){
        array_final[k]=array[i];
        k++;
        i++;
      }
      else{
          array_final[k]=array_2[j];
          k++; j++;
      }
    }
  }
}
int main() {
  array_A[5]=[2, 5, 10, 15, 20]
  array_B[3]=[4, 6, 9]
  return 0;
}
