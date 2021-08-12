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
static const char HORIZONTAL = 'H';
static const char VERTICAL = 'F';
static const char LINTERNA = 'L';
static const char CHLOE = 'C';

// Pre: recibe el struct juego sin nada inicializado, el tipo de personaje y una variable. Dependiendo del test de personadlidad, el oso que recibirá (tipo_personaje)
// Post: El oso queda inicializado en una posicion random
void inicializar_osos(juego_t* juego, char tipo_personaje, int *fila_de_spawn_oso){
  *fila_de_spawn_oso = rand() % 20 + 0;
  int columna_de_spawn = 0;
  juego->personaje.tipo = tipo_personaje;
  juego->personaje.posicion.fil = *fila_de_spawn_oso;
  juego->personaje.posicion.col = columna_de_spawn;
}
// Pre: recibe el struct juego con el personaje oso inicializado y la fila de spawn del oso. Esta ultima depende de la inicializacion anterior.
// Post: Chloe queda inicializada en un lugar random que NO sea igual al lugar asigando al oso.
void inicializar_chloe(juego_t* juego, int * fila_de_spawn_oso){
  juego->amiga_chloe.fil = rand() % 20 + 0;
  juego->amiga_chloe.col = rand() % 30 + 0;
  if(juego->amiga_chloe.fil == *fila_de_spawn_oso && juego->amiga_chloe.col == 0){
    juego->amiga_chloe.fil = rand() % 20 + 0;
    juego->amiga_chloe.col = rand() % 30 + 0;
  }
}
// Pre: recibe el struct juego sin incializar, el tipo de personaje y la fila de spawn del oso..
// Post:inicializa a chloe y al oso.
void inicializar_personajes(juego_t* juego, char tipo_personaje, int *fila_de_spawn_oso){
  inicializar_osos(juego, tipo_personaje, fila_de_spawn_oso);
  inicializar_chloe(juego, fila_de_spawn_oso);
}


// Pre: recibe el struct juego con chloe y el oso inicializado. Ademas, recibe el tope actual del vector obstaculos.
// Post: se inicializan el total de arboles en corrdenadas no repetidas y que no corespondan con chloe o el oso
void inicializar_arboles(juego_t* juego, int * tope, int * fila_de_spawn_oso){
  for(juego->cantidad_obstaculos = MIN_OBSTACULOS; juego->cantidad_obstaculos < MAX_ARBOLES; juego->cantidad_obstaculos++){
    int fila = rand() % 20 + 0;
    int columna = rand() % 30 + 0;
    int i = 0;
    while (i < *tope){
      if ((juego->obstaculos[1].posicion.fil == fila && juego->obstaculos[1].posicion.col == columna) || (1 == fila && 0 == columna) || (1 == fila && 1 == columna)){
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
        tope++;
  }
}
// Pre: recibe el struct juego con chloe, el oso y los arboles inicializado. Ademas, recibe el tope actual del vector obstaculos.
// Post: se inicializan el total de piedras en corrdenadas no repetidas y que no corespondan con chloe, el oso o arboles
void inicializar_piedras(juego_t* juego, int * tope, int * fila_de_spawn_oso){
  for(juego->cantidad_obstaculos = MAX_ARBOLES; juego->cantidad_obstaculos < MAX_PIEDRAS; juego->cantidad_obstaculos++ ){
    int fila = rand() % 20 + 0;
    int columna = rand() % 30 + 0;//post: inicializa el koala con sus coordenada correspondiente
    int i = 0;
    while (i < *tope){
      if ((juego->obstaculos[i].posicion.fil == fila && juego->obstaculos[i].posicion.col == columna) || (*fila_de_spawn_oso == fila && 0 == columna) || (juego->amiga_chloe.fil == fila && juego->amiga_chloe.col == columna)){
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
    juego->obstaculos[juego->cantidad_obstaculos].posicion.col= columna;
  }
}
// Pre: recibe el struct juego con chloe, el oso, arboles y piedras inicializado. Ademas, recibe el tope actual del vector obstaculos.
// Post: Se inicializa un koala y, luego, cada vez que se encienda la lintera, se inicializara otro
void inicializar_koalas(juego_t* juego, int * tope, int * fila_de_spawn_oso){
    int fila = rand() % 20 + 0;
    int columna = rand() % 30 + 0;
<<<<<<< HEAD
    int i = 0;
=======
    int i = 0; 
>>>>>>> 4d21a9b10cd4f54e407282a6c96c00769b22ca46
    while (i < *tope){
      if ((juego->obstaculos[i].posicion.fil == fila && juego->obstaculos[i].posicion.col == columna) || (*fila_de_spawn_oso == fila && 0 == columna) || (juego->amiga_chloe.fil == fila && juego->amiga_chloe.col == columna)){
        fila = rand() % 20 + 0;
        columna = rand() % 30 + 0;
        i = 0;
      }
      else{
        i++;
      }
    }
    juego->obstaculos[juego->cantidad_obstaculos].tipo = KOALA;
    juego->obstaculos[juego->cantidad_obstaculos].posicion.fil= rand() % 20 + 0;
    juego->obstaculos[juego->cantidad_obstaculos].posicion.col= rand() % 30 + 0;
<<<<<<< HEAD
=======
    juego->cantidad_obstaculos = MAX_PIEDRAS;
>>>>>>> 4d21a9b10cd4f54e407282a6c96c00769b22ca46
    juego->cantidad_obstaculos++;

    if(juego->personaje.mochila[juego->personaje.elemento_en_uso].tipo == LINTERNA){
      int fila = rand() % 20 + 0;
      int columna = rand() % 30 + 0;
      int i = 0;
      while (i < *tope){
        if ((juego->obstaculos[i].posicion.fil == fila && juego->obstaculos[i].posicion.col == columna) || (*fila_de_spawn_oso == fila && 0 == columna) || (juego->amiga_chloe.fil == fila && juego->amiga_chloe.col == columna)){
          fila = rand() % 20 + 0;
          columna = rand() % 10 + 0;
          i = 0;
        }
        else{
          i++;
        }
      }
        juego->obstaculos[juego->cantidad_obstaculos].tipo = KOALA;
        juego->obstaculos[juego->cantidad_obstaculos].posicion.fil= rand() % 20 + 0;
        juego->obstaculos[juego->cantidad_obstaculos].posicion.col= rand() % 30 + 0;
<<<<<<< HEAD
=======
        juego->cantidad_obstaculos = MAX_PIEDRAS;
>>>>>>> 4d21a9b10cd4f54e407282a6c96c00769b22ca46
        juego->cantidad_obstaculos++;
    }

    }


// Pre: recibe el struct juego con chloe y el oso incializados, el tipo de personaje y la fila de spawn del oso..
// Post:inicializa a arboles, koalas y piedras
void inicializar_obstaculos(juego_t* juego, int * fila_de_spawn_oso){
    int a = 0;
    int * tope_obstaculos = &a;
    inicializar_arboles(juego, tope_obstaculos, fila_de_spawn_oso);
    inicializar_piedras(juego, tope_obstaculos, fila_de_spawn_oso);
    inicializar_koalas(juego, tope_obstaculos, fila_de_spawn_oso);
}

// Pre: recibe el struct juego con chloe, el oso, arboles, piedras y un koala inicializado. Ademas, recibe el tope actual del vector herramientas.
// Post: Se inicializa pilas en coord no repetidas.
void inicializar_pilas(juego_t* juego, int * tope, int * fila_de_spawn_oso){
  for(juego->cantidad_herramientas = MIN_HERRAMIENTAS; juego->cantidad_herramientas < MAX_PILAS; juego->cantidad_herramientas++){
    int fila = rand() % 20 + 0;
    int columna = rand() % 30 + 0;
    int i = 0;
    while (i < *tope){
      if ((juego->herramientas[i].posicion.fil == fila && juego->herramientas[i].posicion.col == columna) ||(juego->obstaculos[i].posicion.fil == fila && juego->obstaculos[i].posicion.col == columna) || (*fila_de_spawn_oso == fila && 0 == columna) || (juego->amiga_chloe.fil == fila && juego->amiga_chloe.col == columna) ){
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
// Pre: recibe el struct juego con chloe, el oso, arboles, piedras, un koala inicializado y pilas Ademas, recibe el tope actual del vector herramientas.
// Post: Se inicializa velas en coord no repetidas.
void inicializar_velas(juego_t* juego, int *tope, int * fila_de_spawn_oso){
  for(juego->cantidad_herramientas = MAX_PILAS; juego->cantidad_herramientas < MAX_VELAS; juego->cantidad_herramientas++){
    int fila = rand() % 20 + 0;
    int columna = rand() % 30 + 0;
    int i = 0;
    while (i < *tope){
      if ((juego->herramientas[i].posicion.fil == fila && juego->herramientas[i].posicion.col == columna) ||(juego->obstaculos[i].posicion.fil == fila && juego->obstaculos[i].posicion.col == columna) || (*fila_de_spawn_oso == fila && 0 == columna) || (juego->amiga_chloe.fil == fila && juego->amiga_chloe.col == columna)){
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
// Pre: recibe el struct juego con chloe, el oso, arboles, piedras, un koala inicializado, pilas y velas. Ademas, recibe el tope actual del vector herramientas.
// Post: Se inicializa bengalas en coord no repetidas.
void inicializar_bengalas(juego_t* juego, int * tope, int * fila_de_spawn_oso){
  for(juego->cantidad_herramientas = MAX_VELAS; juego->cantidad_herramientas < MAX_BENGALAS; juego->cantidad_herramientas++){
    int fila = rand() % 20 + 0;
    int columna = rand() % 30 + 0;
    int i = 0;
    while (i < *tope){
      if ((juego->herramientas[i].posicion.fil == fila && juego->herramientas[i].posicion.col == columna) ||(juego->obstaculos[i].posicion.fil == fila && juego->obstaculos[i].posicion.col == columna) || (*fila_de_spawn_oso == fila && 0 == columna) || (juego->amiga_chloe.fil == fila && juego->amiga_chloe.col == columna)){
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
// Pre: recibe el struct juego con chloe, el oso, arboles, piedras y un koala.
// Post: Se inicializa velas en coord no repetidas.
void inicializar_herramientas(juego_t* juego, int * fila_de_spawn_oso){
  int a = 0;
  int * tope_herramientas = &a;
  inicializar_pilas(juego, tope_herramientas, fila_de_spawn_oso);
  inicializar_velas(juego, tope_herramientas, fila_de_spawn_oso);
  inicializar_bengalas(juego, tope_herramientas, fila_de_spawn_oso);
}


// Pre: no llegue a hacer estas son las herramietas que se activan cuando las usas gracias por todo candeeeeeeee
void inicializar_linterna(juego_t* juego){
    int posicion_herramienta = juego->personaje.elemento_en_uso;
    if(juego->personaje.mochila[posicion_herramienta].tipo == LINTERNA){
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
  int posicion_herramienta = juego->personaje.elemento_en_uso;
  if(juego->personaje.mochila[posicion_herramienta].tipo == VELA){
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
    int posicion_herramienta = juego->personaje.elemento_en_uso;
  if(juego->personaje.mochila[posicion_herramienta].tipo == BENGALA){
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
  juego->personaje.elemento_en_uso = 1;
  inicializar_linterna(juego);
  inicializar_vela(juego);
  inicializar_bengala(juego);
}

void inicializar_mochila(juego_t* juego){
  inicializar_objetos(juego);

}


//inicializa el herramientas, y obstaculos en sus coordenadas correspondientes
void inicializar_juego(juego_t* juego, char tipo_personaje){
  int aux = 0;
  int * fila_de_spawn_oso = &aux;
  inicializar_personajes(juego, tipo_personaje, fila_de_spawn_oso);
  inicializar_obstaculos(juego, fila_de_spawn_oso);
  inicializar_herramientas(juego, fila_de_spawn_oso);
  inicializar_mochila(juego);
}

//pre: que las coordenadas de los obstaculos y herramientas esten dentro del alto y del ancho de la matriz terreno.
//carga a la matriz terreno los diferentes obstaculos y las diferentes herramientas segun su posicion (coordenadas)
void cargar_terreno(juego_t juego, char terreno[ALTO][ANCHO]){
  for (int i = 0; i < ALTO; i++){
    for (int j = 0; j < ANCHO; j++) {
      terreno[i][j] = '.';
      if (i == juego.personaje.posicion.fil && j == juego.personaje.posicion.col){
        terreno[i][j] = juego.personaje.tipo;
      }
      if (i == juego.amiga_chloe.fil && j == juego.amiga_chloe.col){
        terreno[i][j] = CHLOE;
      }
      for(int k = 0; k < juego.cantidad_obstaculos; k++){
        if(i ==  juego.obstaculos[k].posicion.fil && j == juego.obstaculos[k].posicion.col /*&& juego.obstaculos[k].visible == true*/){
          terreno[i][j] = juego.obstaculos[k].tipo;
        }
      }
      for(int k = 0; k < juego.cantidad_herramientas; k++){
        if(i ==  juego.herramientas[k].posicion.fil && j == juego.herramientas[k].posicion.col /*&& juego.herramientas[k].visible == true*/){
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
