#include <stdio.h>
#include <stdbool.h>
#define MAX_RESPUESTAS 300
const char AMBOS_SI = 'S';
const char AMBOS_NO = 'N';
const char SOLO_EDD_SI = 'E';
const char SOLO_EDDY_SI = 'D';
const char LIBRA = 'L';
const char PISCIS = 'P';
const char ACUARIO = 'A';
const char CANCER = 'C';

const int VALOR_MIN_LIBRA = 0;
const int VALOR_MAX_LIBRA = 2;
const int VALOR_MIN_PISCIS = 3;
const int VALOR_MAX_PISCIS = 5;
const int VALOR_MIN_ACUARIO = 6;
const int VALOR_MAX_ACUARIO = 8;
const int VALOR_MIN_CANCER = 8;


bool tienen_mismo_signo(char respuestas[MAX_RESPUESTAS], int tope_respuestas) {
	int valor_signo_edd = 0;
		char signo_edd;
		int valor_signo_eddy = 0;
		char signo_eddy;
	for(int i = 0; i<MAX_RESPUESTAS; i++){
		if (respuestas[i] == AMBOS_SI || respuestas[i] == SOLO_EDD_SI){
			valor_signo_edd = valor_signo_edd + 1;
		}
		else if (respuestas[i] == AMBOS_SI || respuestas[i] == SOLO_EDDY_SI){
			valor_signo_eddy = valor_signo_eddy + 1;
		}
	}
	if(valor_signo_edd >= VALOR_MIN_LIBRA && valor_signo_edd <= VALOR_MAX_LIBRA){
		signo_edd = LIBRA;

	}
	else if(valor_signo_edd >= VALOR_MIN_PISCIS && valor_signo_edd <= VALOR_MAX_PISCIS){
		signo_edd = PISCIS;

	}
	else if(valor_signo_edd >= VALOR_MIN_ACUARIO && valor_signo_edd <= VALOR_MAX_ACUARIO){
		signo_edd = ACUARIO;

	}
		else if(valor_signo_edd >= VALOR_MIN_CANCER){
		signo_edd = CANCER;

	}
	else if(valor_signo_eddy >= VALOR_MIN_LIBRA && valor_signo_eddy <= VALOR_MAX_LIBRA){
		signo_eddy = LIBRA;

	}
	else if(valor_signo_eddy >= VALOR_MIN_PISCIS && valor_signo_eddy <= VALOR_MAX_PISCIS){
		signo_eddy = PISCIS;

	}
	else if(valor_signo_eddy >= VALOR_MIN_ACUARIO && valor_signo_eddy <= VALOR_MAX_ACUARIO){
		signo_eddy = ACUARIO;

	}
		else if(valor_signo_eddy >= VALOR_MIN_CANCER){
		signo_eddy = CANCER;

	}

	if(signo_edd == signo_eddy){
		return true;
	}
	return 0;
}
