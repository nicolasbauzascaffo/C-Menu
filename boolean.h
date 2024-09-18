#ifndef BOOLEAN_H_INCLUDED
#define BOOLEAN_H_INCLUDED
#include <stdio.h>

typedef enum { FALSE,TRUE } boolean;

void cargar_bool(boolean &b);
void mostrar_bool(boolean b);

#endif
