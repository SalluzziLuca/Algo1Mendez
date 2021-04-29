#include <stdio.h>

// Aqui deberias definir las constantes para las opciones...
const char IR_POR_IZQUIERDA = 'I';
const char IR_POR_DERECHA = 'D';
int main(){
	char camino;
	scanf("%c", &camino);

	if (camino == IR_POR_IZQUIERDA){
		printf("Por la izquierda!");
	}
	else if (camino == IR_POR_DERECHA){
		printf("Por la derecha!");
	}
	else{
		printf("Iiiieiii la encontré");
	}
  return 0;
}
