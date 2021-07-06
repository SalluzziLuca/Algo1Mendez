#include <stdio.h>

int main() {
  FILE * archi;
  FILE * destino;
  archi = fopen("./copy.c", "r");
  destino = fopen("./copy_bak.c", "w"); //abre el archivo para lectura. Ni no existe lo crea, lo si existe lo sobreescribe.
  if(!archi){
      printf("error de apertura\n");
      return -1;
  }
  if(!destino){
      printf("error de apertura\n");
      fclose(archi);
      return -1;
  }
  int letra;
  while(!feof(archi)){
    letra=fgetc(archi);
    fputc(letra,destino);
  }

  fclose(archi);
  fclose(destino);
  return 0;
}
