#include <stdio.h>

int main(){
	int veces_repetidas;
	scanf("%i", &veces_repetidas);
	// Aqui va tu codigo donde deberias usar un do while..
int veces_max = 0;
do while (veces_repetidas >= veces_max){
	printf("Me gusta el cereal. \n Me gustan las papas");
	veces_max++;
}
	return 0;
}
