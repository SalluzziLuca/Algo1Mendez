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
static const char HORIZONTAL = 'H';
static const char VERTICAL = 'V';


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
}

void inicializar_linterna(juego_t* juego){
  if(/*juego.personaje.elemento_en_uso=linterna*/){
    int fila_actual = juego.personaje.posicion.fil;
    int columna_actual = juego.personnaje.posicion.col;
    if(juego.persona.ultimo_movimiento == HORIZONTAL){
      // iluminar toda la fila
      for(int i = fila_actual; i > 20; i++){
        juego->obstaculo[i]->visible = true;
      }
    }
    if(juego.persona.ultimo_movimiento == VERTICAL){
      // iluminar toda la columna
      for(int i = columna_actual; i > 30; i++){
        juego->obstaculo[i]->visible = true;
      }
    }
  }
}

void inicializar_vela(juego_t* juego){
  if(/*juego.personaje.elemento_en_uso=vela*/){
    int fila_actual = juego.personaje.posicion.fil;
    int columna_actual = juego.personaje.posicion.col;
    // int esquina_arriba_derecha =
    // ilumina todas las posiciones adyacentes al personaje. Si el personaje esta en la [2][3] ilumina. 1,2 1,3 1,4  2,2 2,3 2,4  3,2 3,3 3,4
  }
}

void inicializar_bengala(juego_t* juego){
  if(/*juego.personaje.elemento_en_uso=bengala*/){
    juego->obstaculo->posicion->col= rand() % 20 + 0;
    int fila_de_spawn = juego->obstaculo.posicion.col;

  }
}

void inicializar_herramientas(juego_t juego){
  inicializar_linterna(juego);
  inicializar_vela(juego);
  inicializar_bengala(juego);
}
void inicializar_mochila(juego_t* juego){

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
  inicializar_obstaculos(juego);
  prueba_osos(tipo_personaje);
}

void mostrar_obstaculos(juego_t juego, char* terreno[ALTO][ANCHO]){
  for(int i = 0; i < juego.cantidad_obstaculos; i++){
    if(juego.obstaculos[i].tipo == ARBOL){
      int fila;
      fila = juego.obstaculos[i].posicion.fil;
      int columna;
      columna  = juego.obstaculos[i].posicion.col;
      *terreno[fila][columna]= ARBOL;
    }
    else{
      int fila;
      fila = juego.obstaculos[i].posicion.fil;
      int columna;
      columna  = juego.obstaculos[i].posicion.col;
      terreno[fila][columna]= ".";
    }
  }
}



void mostrar_terreno(juego_t juego, char* terreno[ALTO][ANCHO]){
  for(int i = 0; i < juego.cantidad_obstaculos; i++){
    printf("%c", juego.obstaculos[i].tipo);
  }
}

void mostrar_juego(juego_t juego){
  char* terreno[ALTO][ANCHO];
  mostrar_terreno(juego, terreno);
  mostrar_obstaculos(juego, terreno);
}
