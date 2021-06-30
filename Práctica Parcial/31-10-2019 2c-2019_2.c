#include <stdio.h>
#include <stdlib.h>
typedef struct guerrero {
  char nombre[MAX_NOMBRE];
  int edad;
  int orcos_matados;
  int uruk_matados;
} guerrero_t;
void guerreros_validos(guerrero_t plennelor[MAX_NOMBRE], int tope_plennelor, guerrero_t cuernavilla[MAX_GUERREROS], int tope_cuernavilla, guerrero_t merecedores_quinta[MAX_NOMBRE], int tope_merecedores){
  for (size_t j = 0; j < count; j++) {
    for (size_t i = 0; i < count; i++) {
      if((strcmp(guerrero.plennelor[j],guerrero.cuernavilla[i]) = 0) && ((guerrero.plennelor[j].orcos_matados + guerrero.cuernavilla[i].orcos_matados) >= 10 || (guerrero.plennelor[j].uruk_matados + guerrero.cuernavilla[i].uruk_matados) >= 2){

      guerrero.plennelor[j]=guerrero.merecedores_quinta[i];
      }
    }
  }
}
