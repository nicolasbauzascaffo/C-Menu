#include "boolean.h"

void cargar_bool(boolean &b){
    char c;
    scanf("%c", &c);
    fflush(stdin);
    if(c == 'T' || c == 't'){
        b = TRUE;
    } else {
        b = FALSE;
    }
}

void mostrar_bool(boolean b){
    if(b){
        printf("Es bachiller");
    } else {
        printf("No es bachiller");
    }
}

