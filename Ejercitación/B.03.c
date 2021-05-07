#include "solucion.h"
char EXCELENTE = 'A';
char BUENO = 'B';
char MALO = 'C';
char PESIMO = 'D';
#define AMORTIGUAMIENTO 3

int volumen_amortiguado(int volumen) {
    return (volumen / AMORTIGUAMIENTO);
}



char  calcular_calidad_auriculares(int volumen) {
    volumen_amortiguado (volumen);
    volumen = int volumen_ya_amortiguado;
     if(volumen_ya_amortiguado <= 10){
     return EXCELENTE;
    }
    else if (volumen_ya_amortiguado <= 40 && volumen_ya_amortiguado > 10){
     return BUENO;
    }
    else if (volumen_ya_amortiguado <= 70 && volumen_ya_amortiguado > 40){
     return MALO;
    }
    else {
     return PESIMO;
 }

}
