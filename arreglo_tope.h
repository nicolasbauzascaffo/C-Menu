#ifndef ARREGLO_TOPE_H_INCLUDED
#define ARREGLO_TOPE_H_INCLUDED
#include <stdio.h>
#include "alumno.h"

const int MAXIMO = 5;
typedef struct {
    int tope;
    alumno arre_alm[MAXIMO];
} arr_con_tope;

void inicializar(arr_con_tope &arr);
void cargar_arr(arr_con_tope &arr);
void mostrar_arr(arr_con_tope arr);
void eliminar_alm(arr_con_tope &arr,long int cedula);
boolean buscar_alm(arr_con_tope arr,long int cedula);

#endif
