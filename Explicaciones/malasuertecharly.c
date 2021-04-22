#include <stdio.h>
// Esta es la libreria que estamos usando
const char PRIMERA_ALFABETO = 'A';
const char ULTIMA_ALFABETO = 'Z';

const int MINIMO_VALOR_PERMITIDO = 1;
const int MAXIMO_VALOR_PERMITIDO = 50;

const int INTENTOS_PERMITIDOS = 3;
// aca especificamos las const. Ya que nunc cambian las ponemos arriba del int()

int main() {
// con esto inicia nuestro codigo
	char letra_charly;
	int numero_charly;

	char letra_participante;
	int numero_participante;
	int intentos = 1;
	// especificamos las variables. Primero el tipo de dato que va a ser seguido por el nombre de la variable

	printf("Charly tirate esa letra pa (entre %c y %c): ", PRIMERA_ALFABETO, ULTIMA_ALFABETO);
	// output
	scanf(" %c", &letra_charly);
	// input. lo que el usuario ingrese va a ser un char(character) y se va a asignar su valor a la variable "letra charly"
	while (letra_charly < PRIMERA_ALFABETO || letra_charly > ULTIMA_ALFABETO){
		printf("Charly, te equivocastesssss, te dije entre %c y %c: ", PRIMERA_ALFABETO, ULTIMA_ALFABETO);
		scanf(" %c", &letra_charly);
	}
	// si la letra que el user asigne sea menor que A y mayor que Z (no estaría entre A y Z). salta otro output pidiendo letra y un imput para ingresarlo.

	printf("Charly tirate ese numero pa (%i y %i): ", MINIMO_VALOR_PERMITIDO, MAXIMO_VALOR_PERMITIDO);
	scanf("%i", &numero_charly);
	while (numero_charly < MINIMO_VALOR_PERMITIDO || numero_charly > MAXIMO_VALOR_PERMITIDO){
		printf("Charly, te equivocastesssss, te dije entre %i y %i: ", MINIMO_VALOR_PERMITIDO, MAXIMO_VALOR_PERMITIDO);
		scanf("%i", &numero_charly);
	}
// igual que arriba, pero en vez de una letra pedimos un numero. Por eso el formateador es %i. %i=int (en base 10 con signo)


	printf("Intento: %i\n", intentos);
	printf("Participante, elegi una letra entre %c y %c: ", PRIMERA_ALFABETO, ULTIMA_ALFABETO);
	scanf(" %c", &letra_participante);
	while (letra_participante < PRIMERA_ALFABETO || letra_participante > ULTIMA_ALFABETO){
		printf("te equivocaste chiquistriquis, era entre %c y %c, probá de vuelta: ", PRIMERA_ALFABETO, ULTIMA_ALFABETO);
		scanf(" %c", &letra_participante);
	}
	// igual que para charly pero con el participante

	printf("Participante, elegi un numero entre %i y %i: ", MINIMO_VALOR_PERMITIDO, MAXIMO_VALOR_PERMITIDO);
	scanf("%i", &numero_participante);
	while (numero_participante < MINIMO_VALOR_PERMITIDO || numero_participante > MAXIMO_VALOR_PERMITIDO){
		printf("te equivocaste chiquistriquis, era entre %i y %i, probá de vuelta: ", MINIMO_VALOR_PERMITIDO, MAXIMO_VALOR_PERMITIDO);
		scanf(" %i", &numero_participante);
	}
// igual que para charly pero con el Participante

	while (!(letra_charly == letra_participante && numero_charly == numero_participante)
	// si lo que escribe el participante y charly NO (!) es igual, entonces...
		&& intentos <= INTENTOS_PERMITIDOS){
			// Y los intentos sean menores o iguales a los permitidos...

		intentos++;
		// se suma 1 al contador de intentos

		printf("Intento: %i\n", intentos);
		printf("Participante, elegi una letra entre %c y %c: ", PRIMERA_ALFABETO, ULTIMA_ALFABETO);
		scanf(" %c", &letra_participante);
		while (letra_participante < PRIMERA_ALFABETO || letra_participante > ULTIMA_ALFABETO){
			printf("te equivocaste chiquistriquis, era entre %c y %c, probá de vuelta: ", PRIMERA_ALFABETO, ULTIMA_ALFABETO);
			scanf(" %c", &letra_participante);
		}
		printf("Participante, elegi un numero entre %i y %i: ", MINIMO_VALOR_PERMITIDO, MAXIMO_VALOR_PERMITIDO);
		scanf("%i", &numero_participante);
		while (numero_participante < MINIMO_VALOR_PERMITIDO || numero_participante > MAXIMO_VALOR_PERMITIDO){
			printf("te equivocaste chiquistriquis, era entre %i y %i, probá de vuelta: ", MINIMO_VALOR_PERMITIDO, MAXIMO_VALOR_PERMITIDO);
			scanf(" %i", &numero_participante);
		}
	}
// mismo que arriba, se repite.

	if (intentos <= INTENTOS_PERMITIDOS) {
		printf("Charly largá los dolarucos!");
	} else {
		printf("Dame ese pesito bb.");
	}
	// si llegaste hasta aca y los intentos son menos o igual que los permitios, ganaste

	return 0;
	// return 0 LMAO
}
