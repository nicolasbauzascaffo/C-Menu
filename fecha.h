#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anio;
} fecha;

void cargar_fecha(fecha &f);

#endif
