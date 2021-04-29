#include <stdio.h>
// Aqui deberias definir las constantes…
const char ENERO = 'E';
const char FEBRERO = 'F';
const char MONTANIA = 'M';
const char PLAYA = 'P';

int main(){
	char epoca;
	char paisaje;
	scanf(" %c", &epoca);
	scanf(" %c", &paisaje);
	// Aqui va tu codigo…
	if (epoca == ENERO && paisaje == MONTANIA){
		printf("Tom");
	}
  else if(epoca == FEBRERO && paisaje == PLAYA){
    printf("Tom");
  }

	else{
		printf("Jerry");
	}

	return 0;
}
