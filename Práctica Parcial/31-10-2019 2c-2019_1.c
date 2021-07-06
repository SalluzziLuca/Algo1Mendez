#include <stdio.h>
#include <stdlib.h>
const int VISION_MAX_ELFO = 10;
bool esta_segura(char lorien[MAX_ALTO][MAX_ANCHO], int alto, int ancho){
  bool esta_protegida;
  while(esta_protegida = true) {
     if (lorien[i][j]==N){

       int contador = 0;
       while(esta_protegida == false && contador <= VISION_MAX_ELFO){
         i = i + contador;
         if(lorien[i][j]== E){
           esta_protegida = true;
         }
         else if(lorien[i][j]== A){
           esta_protegida=false;
         }
         else{
           contador ++;
         }
          return esta_protegida;
       }
       while(esta_protegida == false && contador >= VISION_MAX_ELFO){
         j = j + contador;
         if(lorien[i][j]== E){
           esta_protegida = true;
         }
         else{
           contador ++;
         }
          return esta_protegida;
       }
       while(esta_protegida == false && contador >= VISION_MAX_ELFO){
         i = i - contador;
         if(lorien[i][j]== E){
           esta_protegida = true;
         }
         else{
           contador ++;
         }
          return esta_protegida;
       }
       while(esta_protegida == false && contador >= VISION_MAX_ELFO){
         j = j - contador;
         if(lorien[i][j]== E){
           esta_protegida = true;
         }
         else{
           contador ++;
         }
         return esta_protegida;
       }
     }
    }
  }
}
