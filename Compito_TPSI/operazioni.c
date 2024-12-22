#include "trace.h"

int somma(int num1, int num2){
    #ifdef DEBUG
    TRACE();
    #endif
    return num1 + num2;
}

int differenza(int num1, int num2){
    #ifdef DEBUG
    TRACE();
    #endif
    return num1 - num2;
}

int moltiplicazione(int num1, int num2){
    #ifdef DEBUG
    TRACE();
    #endif
    return num1 * num2;
}

float divisione(float num1, float num2){
    #ifdef DEBUG
    TRACE();
    #endif
    return num1 / num2;
}