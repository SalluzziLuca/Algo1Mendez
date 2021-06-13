#ifndef __TEST_DE_PERSONALIDAD_H__
#define __TEST_DE_PERSONALIDAD_H__

const char ERROR = 'E';
const char POLAR = 'I';
const char PANDA = 'P';
const char PARDO = 'G';
const char ANIME = 'A';
const char MUSICA_POP = 'M';
const char LIMPIEZA = 'L';
const char BAMBU = 'B';
const char PESCADO = 'P';
const char FOCAS = 'F';
const int PISO_MINIMO = 1;
const int PISO_MAXIMO = 18;
const int GRITO_MINIMO = 1;
const int GRITO_MAXIMO = 18;
const int VALOR_CANAL_LIMPIEZA = 1;
const int VALOR_CANAL_ANIME = 2;
const int VALOR_CANAL_MUSICA_POP = 3;
const int VALOR_FOCAS = 3;
const int VALOR_BAMBU = 6;
const int VALOR_PESCADO = 9;
const int PUNTAJE_MINIMO_POLAR = 5;
const int PUNTAJE_MAXIMO_POLAR = 24;
const int PUNTAJE_MINIMO_PANDA = 25;
const int PUNTAJE_MAXIMO_PANDA = 43;
const int PUNTAJE_MINIMO_PARDO = 44;
const int PUNTAJE_MAXIMO_PARDO = 63;

void test_de_personalidad(char* personalidad_detectada);

#endif
