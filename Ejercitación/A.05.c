#include <stdio.h>
//Aqui deberias definir una costante...
const int CANTIDAD_ESPERADA = 15;
int main(){
	int cantidad_mandy;
	int cantidad_billy;
	scanf("%i", &cantidad_mandy);
	scanf("%i", &cantidad_billy);
	// Aqui va tu codigo…
int	cantidad_total = cantidad_billy + cantidad_mandy;
	if (cantidad_total == CANTIDAD_ESPERADA ){
		printf("Malditos demonios!!!");
	}
	else{
		printf("Hoy no podrán conmigo");
	}
	return 0;
}
