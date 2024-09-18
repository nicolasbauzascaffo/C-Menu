#include "fecha.h"

void cargar_fecha(fecha &f){
    printf("Ingrese el dia, mes y anio separados por un espacio: ");
    scanf("%d %d %d", &f.dia, &f.mes, &f.anio);
    fflush(stdin);
}
