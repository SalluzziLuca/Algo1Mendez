#include "osos_contra_reloj.h"
#include <stdio.h>
#include <stdlib.h>

static const int ALTO = 20;
static const int ANCHO = 30;
static const int MIN_OBSTACULOS = 0;
static const int MAX_ARBOLES = 350;
static const int MAX_PIEDRAS = 430;
static const char POLAR = 'I';
static const char PANDA = 'P';
static const char PARDO = 'G';
static const char ARBOL = 'A';
static const char PIEDRA = 'R';
static const char KOALA = 'K';


/* pre: recibe el struct juego_t* juego sin modificaciones
  post: carga 350 (MAX_ARBOLES) arboles, invisibles y en coordenadas aleatorias dentro de la matriz
  */
void inicializar_arboles(juego_t* juego){
    for(juego->cantidad_obstaculos = MIN_OBSTACULOS; juego->cantidad_obstaculos < MAX_ARBOLES; juego->cantidad_obstaculos++){
    juego->obstaculos[juego->cantidad_obstaculos].tipo = ARBOL;
    juego->obstaculos[juego->cantidad_obstaculos].posicion.fil= rand() % 20 + 0;
    juego->obstaculos[juego->cantidad_obstaculos].posicion.col= rand() % 30 + 0;
  }
}

void inicializar_piedras(juego_t* juego){
    for(juego->cantidad_obstaculos = MAX_ARBOLES; juego->cantidad_obstaculos < MAX_PIEDRAS; juego->cantidad_obstaculos++ ){
    juego->obstaculos[juego->cantidad_obstaculos].tipo = PIEDRA;
    juego->obstaculos[juego->cantidad_obstaculos].posicion.fil= rand() % 20 + 0;
    juego->obstaculos[juego->cantidad_obstaculos].posicion.col= rand() % 30 + 0;
  }
}

void inicializar_koalas(juego_t* juego){
    juego->cantidad_obstaculos = MAX_PIEDRAS;
    juego->obstaculos[juego->cantidad_obstaculos].tipo = KOALA;
    juego->obstaculos[juego->cantidad_obstaculos].posicion.fil= rand() % 20 + 0;
    juego->obstaculos[juego->cantidad_obstaculos].posicion.col= rand() % 30 + 0;
    }



void inicializar_obstaculos(juego_t* juego){
    inicializar_arboles(juego);
    inicializar_piedras(juego);
    inicializar_koalas(juego);
    void inicializar_matriz(char terreno[ALTO][ANCHO]);
  }


void prueba_osos(char tipo_personaje){
    if(tipo_personaje == POLAR){
      printf("POLAR\n");
    }
    else if(tipo_personaje == PARDO){
      printf("PARDO\n");
    }
    else if(tipo_personaje == PANDA){
      printf("PANDA\n");
    }
  }
void inicializar_juego(juego_t* juego, char tipo_personaje){
  inicializar_obstaculos( juego);
  prueba_osos(tipo_personaje);
}





void mostrar_terreno(char terreno[ALTO][ANCHO]){
  for(int i = 0; i < ALTO; i++){
    for(int j = 0; j < ANCHO; j++){
      printf("%c", terreno[i][j]);
    }
    printf("\n");
  }
  printf("\n\n");
}
void mostrar_juego(juego_t juego){
  char terreno[ALTO][ANCHO];
  mostrar_terreno(terreno);
  mostrar_obstaculos(juego, terreno);
}
