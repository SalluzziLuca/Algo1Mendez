#include "osos_contra_reloj.h"
#include <stdio.h>
#include <stdlib.h>

static const int ALTO = 20;
static const int ANCHO = 30;
static const int MIN_OBSTACULOS = 0;
static const int MAX_ARBOLES = 350;
static const int MAX_PIEDRAS = 430;
static const int MIN_HERRAMIENTAS = 0;
static const int MAX_PILAS = 30;
static const int MAX_VELAS = 60;
static const int MAX_BENGALAS = 70;
// static const char POLAR = 'I';
// static const char PANDA = 'P';
// static const char PARDO = 'G';
static const char ARBOL = 'A';
static const char PIEDRA = 'R';
static const char KOALA = 'K';
static const char PILA = 'B';
static const char VELA = 'V';
static const char BENGALA = 'E';
// static const char HORIZONTAL = 'H';
// static const char VERTICAL = 'F';
// static const char LINTERNA = 'L';
// static const char CHLOE = 'C';


/* pre: recibe el struct juego_t* juego sin modificaciones
  post: inicializa 350 (MAX_ARBOLES) arboles, invisibles y en coordenadas aleatorias dentro de la matriz
  */
  //post: inicializa los arboles con sus coordenadas correspondientes
void inicializar_arboles(juego_t* juego, int * tope){
  for(juego->cantidad_obstaculos = MIN_OBSTACULOS; juego->cantidad_obstaculos < MAX_ARBOLES; juego->cantidad_obstaculos++){
    /* for mas while con busqueda lineal para ver si esa coordenada ya eciste*/
    int fila = rand() % 20 + 0;
    int columna = rand() % 30 + 0;
    int i = 0;
    while (i < *tope){
      if (juego->obstaculos[i].posicion.fil == fila && juego->obstaculos[i].posicion.col == columna){
        fila = rand() % 20 + 0;
        columna = rand() % 30 + 0;
        i = 0;
    }
      else{
        i++;
      }
    }
        juego->obstaculos[juego->cantidad_obstaculos].tipo = ARBOL;
        juego->obstaculos[juego->cantidad_obstaculos].posicion.fil=  fila;
        juego->obstaculos[juego->cantidad_obstaculos].posicion.col= columna;
  }
}
//post: inicializa las piedras con sus coordenadas correspondientes
void inicializar_piedras(juego_t* juego, int * tope){

  for(juego->cantidad_obstaculos = MAX_ARBOLES; juego->cantidad_obstaculos < MAX_PIEDRAS; juego->cantidad_obstaculos++ ){
    int fila = rand() % 20 + 0;
    int columna = rand() % 30 + 0;
    int i = 0;
    while (i < *tope){
      if (juego->obstaculos[i].posicion.fil == fila && juego->obstaculos[i].posicion.col == columna){
        fila = rand() % 20 + 0;
        columna = rand() % 30 + 0;
        i = 0;
      }
      else{
        i++;
      }
    }
    juego->obstaculos[juego->cantidad_obstaculos].tipo = PIEDRA;
    juego->obstaculos[juego->cantidad_obstaculos].posicion.fil=  fila;
    juego->obstaculos[juego->cantidad_obstaculos].posicion.col= columna ;
  }
}
//post: inicializa el koala con sus coordenada correspondiente
void inicializar_koalas(juego_t* juego){
    juego->cantidad_obstaculos = MAX_PIEDRAS;
    juego->obstaculos[juego->cantidad_obstaculos].tipo = KOALA;
    juego->obstaculos[juego->cantidad_obstaculos].posicion.fil= rand() % 20 + 0;
    juego->obstaculos[juego->cantidad_obstaculos].posicion.col= rand() % 30 + 0;
    }


//post: inicializa los 3 repos de obstaculos con sus coordenadas correspondientes
void inicializar_obstaculos(juego_t* juego){
    int a = 0;
    int * tope_obstaculos = &a;
    inicializar_arboles(juego, tope_obstaculos);
    inicializar_piedras(juego, tope_obstaculos);
    inicializar_koalas(juego);
}
//post: inicializa las pilas con sus coordenadas correspondientes
void inicializar_pilas(juego_t* juego, int * tope){
  for(juego->cantidad_herramientas = MIN_HERRAMIENTAS; juego->cantidad_herramientas < MAX_PILAS; juego->cantidad_herramientas++){
    int fila = rand() % 20 + 0;
    int columna = rand() % 30 + 0;
    int i = 0;
    while (i < *tope){
      if ((juego->herramientas[i].posicion.fil == fila && juego->herramientas[i].posicion.col == columna) ||(juego->obstaculos[i].posicion.fil == fila && juego->obstaculos[i].posicion.col == columna)){
        fila = rand() % 20 + 0;
        columna = rand() % 30 + 0;
        i = 0;
    }
      else{
        i++;
      }
    }
    juego->herramientas[juego->cantidad_herramientas].tipo = PILA;
    juego->herramientas[juego->cantidad_herramientas].posicion.fil= fila;
    juego->herramientas[juego->cantidad_herramientas].posicion.col= columna;
  }
}
//post: inicializa las velas con sus coordenadas correspondientes
void inicializar_velas(juego_t* juego, int *tope){
  for(juego->cantidad_herramientas = MAX_PILAS; juego->cantidad_herramientas < MAX_VELAS; juego->cantidad_herramientas++){
    int fila = rand() % 20 + 0;
    int columna = rand() % 30 + 0;
    int i = 0;
    while (i < *tope){
      if ((juego->herramientas[i].posicion.fil == fila && juego->herramientas[i].posicion.col == columna) ||(juego->obstaculos[i].posicion.fil == fila && juego->obstaculos[i].posicion.col == columna)){
        fila = rand() % 20 + 0;
        columna = rand() % 30 + 0;
        i = 0;
    }
      else{
        i++;
      }
    }
    juego->herramientas[juego->cantidad_herramientas].tipo = VELA;
    juego->herramientas[juego->cantidad_herramientas].posicion.fil= fila;
    juego->herramientas[juego->cantidad_herramientas].posicion.col= columna;
  }
}
//post: inicializa las bengalas con sus coordenadas correspondientes
void inicializar_bengalas(juego_t* juego, int * tope){
  for(juego->cantidad_herramientas = MAX_VELAS; juego->cantidad_herramientas < MAX_BENGALAS; juego->cantidad_herramientas++){
    int fila = rand() % 20 + 0;
    int columna = rand() % 30 + 0;
    int i = 0;
    while (i < *tope){
      if ((juego->herramientas[i].posicion.fil == fila && juego->herramientas[i].posicion.col == columna) ||(juego->obstaculos[i].posicion.fil == fila && juego->obstaculos[i].posicion.col == columna)){
        fila = rand() % 20 + 0;
        columna = rand() % 30 + 0;
        i = 0;
    }
      else{
        i++;
      }
    }
    juego->herramientas[juego->cantidad_herramientas].tipo = BENGALA;
    juego->herramientas[juego->cantidad_herramientas].posicion.fil=fila;
    juego->herramientas[juego->cantidad_herramientas].posicion.col= columna;
  }
}
//post: inicializa las herramientas con sus coordenadas correspondientes
void inicializar_herramientas(juego_t* juego){
  int a = 0;
  int * tope_herramientas = &a;
  inicializar_pilas(juego, tope_herramientas);
  inicializar_velas(juego, tope_herramientas);
  inicializar_bengalas(juego, tope_herramientas);
}

void inicializar_linterna(juego_t* juego){
  juego->personaje.ultimo_movimiento = VERTICAL;
  juego->personaje.mochila[1].tipo = LINTERNA;
  if(juego->personaje.mochila[1].tipo == LINTERNA){
    int fila_actual = juego->personaje.posicion.fil;
    int columna_actual = juego->personaje.posicion.col;
    if(juego->personaje.ultimo_movimiento == HORIZONTAL){
      // iluminar toda la fila
      int columnas_restantes =  ANCHO - columna_actual;
      for(int i = columna_actual; i < columnas_restantes; i++){
        for(int k = 0; k < MAX_OBSTACULOS; k++){
          if(juego->obstaculos[k].posicion.col == i && juego->obstaculos[k].posicion.fil == fila_actual){
            juego->obstaculos[k].visible = true;
          }
          if(juego->herramientas[k].posicion.col == i && juego->herramientas[k].posicion.fil == fila_actual){
            juego->herramientas[k].visible = true;
          }
        }
      }
    }
    else if(juego->personaje.ultimo_movimiento == VERTICAL){
      // iluminar toda la columna
      int filas_restantes =  ALTO - fila_actual;
      for(int i = fila_actual; i < filas_restantes; i++){
        for(int k = 0; k < MAX_OBSTACULOS; k++){
          if(juego->obstaculos[k].posicion.fil == i && juego->obstaculos[k].posicion.col == columna_actual){
            juego->obstaculos[k].visible = true;
          }
          if(juego->herramientas[k].posicion.fil == i && juego->herramientas[k].posicion.col == columna_actual){
            juego->herramientas[k].visible = true;
          }
        }
      }
    }
  }
}

void inicializar_vela(juego_t* juego){
  juego->personaje.mochila[1].tipo = VELA;
  if(juego->personaje.mochila[1].tipo == VELA){
    int fila_actual = juego->personaje.posicion.fil;
    int columna_actual = juego->personaje.posicion.col;
    for (int i = fila_actual -1; i < fila_actual +1; i++) {
      for (int j = columna_actual -1; j < columna_actual +1; j++){
        for (int k = 0; k < MAX_OBSTACULOS; k++){
          if(juego->obstaculos[k].posicion.fil == i && juego->obstaculos[k].posicion.col == j){
              juego->obstaculos[k].visible = true;
          }
        }
      }
    }
  }
}
void inicializar_bengala(juego_t* juego){
  juego->personaje.mochila[1].tipo = BENGALA;
  if(juego->personaje.mochila[1].tipo == BENGALA){
    int fila_de_spawn= juego->personaje.posicion.fil;
    int columna_de_spawn= juego->personaje.posicion.fil;
    for(int i = (fila_de_spawn - 3); i < (fila_de_spawn - 2); i++){
      for (int j = (columna_de_spawn); j < (columna_de_spawn); j++) {
        for (int m = 0; m < MAX_OBSTACULOS; m++){
          if(juego->obstaculos[m].posicion.fil == i && juego->obstaculos[m].posicion.col == j){
              juego->obstaculos[m].visible = true;
          }
        }
      }
    }
    for (int i = fila_de_spawn -2; i < fila_de_spawn -1; i++) {
      for (int k = (columna_de_spawn - 1); k < (columna_de_spawn + 1); k++) {
        for (int m = 0; m < MAX_OBSTACULOS; m++){
          if(juego->obstaculos[m].posicion.fil == i && juego->obstaculos[m].posicion.col == k){
              juego->obstaculos[m].visible = true;
          }
        }
      }
    }
    for (int i = fila_de_spawn-1; i < fila_de_spawn; i++) {
      for (int l = (columna_de_spawn - 2); l < (columna_de_spawn + 2); l++) {
        for (int m = 0; m < MAX_OBSTACULOS; m++){
          if(juego->obstaculos[m].posicion.fil == i && juego->obstaculos[m].posicion.col == l){
              juego->obstaculos[m].visible = true;
          }
        }
      }
    }
    for (int i = fila_de_spawn; i < fila_de_spawn + 1; i++) {
      for (int k = (columna_de_spawn - 3); k < (columna_de_spawn + 3); k++) {
        for (int m = 0; m < MAX_OBSTACULOS; m++){
          if(juego->obstaculos[m].posicion.fil == i && juego->obstaculos[m].posicion.col == k){
              juego->obstaculos[m].visible = true;
          }
        }
      }
    }
    for (int i = fila_de_spawn + 1; i < fila_de_spawn + 2; i++) {
      for (int k = (columna_de_spawn - 2); k < (columna_de_spawn + 2); k++) {
        for (int m = 0; m < MAX_OBSTACULOS; m++){
          if(juego->obstaculos[m].posicion.fil == i && juego->obstaculos[m].posicion.col == k){
              juego->obstaculos[m].visible = true;
          }
        }
      }
    }
    for (int i = fila_de_spawn + 2; i < fila_de_spawn + 3; i++) {
      for (int k = (columna_de_spawn - 1); k < (columna_de_spawn +1); k++) {
        for (int m = 0; m < MAX_OBSTACULOS; m++){
          if(juego->obstaculos[m].posicion.fil == i && juego->obstaculos[m].posicion.col == k){
              juego->obstaculos[m].visible = true;
          }
        }
      }
    }
    for (int i = fila_de_spawn + 3; i < fila_de_spawn + 4; i++) {
      for (int k = (columna_de_spawn); k < (columna_de_spawn); k++) {
        for (int m = 0; m < MAX_OBSTACULOS; m++){
          if(juego->obstaculos[m].posicion.fil == i && juego->obstaculos[m].posicion.col == k){
              juego->obstaculos[m].visible = true;
          }
        }
      }
    }
  }
}

void inicializar_objetos(juego_t* juego){
  inicializar_linterna(juego);
  inicializar_vela(juego);
  inicializar_bengala(juego);
}

void inicializar_mochila(juego_t* juego){
  inicializar_objetos(juego);

}
void inicialzar_osos(juego_t* juego){
  int fila_de_spawn = rand() % 20 + 0;
  int columna_de_spawn = 0;

   }
}

// void inicializar_chloe(juego_t* juego){
//   int fila_de_spawn = -1;
//   int columna_de_spawn = -1;
//   for (int k = 0; k < MAX_OBSTACULOS; k++) {
//     while ((fila_de_spawn != juego->obstaculos[k].posicion.fil && columna_de_spawn != juego->obstaculos[k].posicion.col) || (fila_de_spawn != juego->herramientas[k].posicion.fil && columna_de_spawn != juego->herramientas[k].posicion.col)){
//       fila_de_spawn = rand() % 20 + 0;
//       columna_de_spawn = rand() % 30 + 0;
//     }
//   }
//   juego->amiga_chloe.fil = fila_de_spawn;
//   juego->amiga_chloe.col = columna_de_spawn;
// }
void inicializar_personajes(juego_t* juego){
  // inicializar_osos(juego);
  // inicializar_chloe(juego);
}
// void prueba_osos(char tipo_personaje){
//     if(tipo_personaje == POLAR){
//       printf("POLAR\n");
//     }
//     else if(tipo_personaje == PARDO){
//       printf("PARDO\n");
//     }
//     else if(tipo_personaje == PANDA){
//       printf("PANDA\n");
//     }
//   }


//inicializa el herramientas, y obstaculos en sus coordenadas correspondientes
void inicializar_juego(juego_t* juego, char tipo_personaje){

  inicializar_obstaculos(juego);
  printf("obstaculos\n");
  inicializar_herramientas(juego);

  inicializar_mochila(juego);
  inicializar_personajes(juego);

  // prueba_osos(tipo_personaje);
}

//pre: que las coordenadas de los obstaculos y herramientas esten dentro del alto y del ancho de la matriz terreno.
//carga a la matriz terreno los diferentes obstaculos y las diferentes herramientas segun su posicion (coordenadas)
void cargar_terreno(juego_t juego, char terreno[ALTO][ANCHO]){
  for (int i = 0; i < ALTO; i++){
    for (int j = 0; j < ANCHO; j++) {
      terreno[i][j] = '.';
      for(int k = 0; k < juego.cantidad_obstaculos; k++){
        if(i ==  juego.obstaculos[k].posicion.fil && j == juego.obstaculos[k].posicion.col && juego.obstaculos[k].visible == true){
          terreno[i][j] = juego.obstaculos[k].tipo;
        }
      }
      for(int k = 0; k < juego.cantidad_herramientas; k++){
        if(i ==  juego.herramientas[k].posicion.fil && j == juego.herramientas[k].posicion.col && juego.herramientas[k].visible == true){
          terreno[i][j] = juego.herramientas[k].tipo;
        }
      }
    }
  }
}
//pre: Que el terreno este cargado correctamente
//post: imprime por pantalla el terreno
void imprimir_terreno(char terreno[ALTO][ANCHO]){
  for (int i = 0; i < ALTO; i++) {
    for (int j = 0; j < ANCHO; j++) {
      printf("[%c]", terreno[i][j]);
    }
    printf("\n");
  }
  printf("\n\n");
}

//pre: que el terreno este cargado adecuadamente con las informacion de los structs
//post muestra el juego por pantalla (por ahora solo el terreno)

void mostrar_juego(juego_t juego){
  char terreno[ALTO][ANCHO];
  cargar_terreno(juego, terreno);
  imprimir_terreno(terreno);
}
