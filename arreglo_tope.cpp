#include "arreglo_tope.h"

void inicializar(arr_con_tope &arr){
    arr.tope = 0;
}

void cargar_arr(arr_con_tope &arr){
    cargar_Alm(arr.arre_alm[arr.tope]);
    arr.tope += 1;
}

void mostrar_arr(arr_con_tope arr){
    for(int i = 0; i < arr.tope; i++){
        printf("Alumno Nro %d", i+1);
        mostrar_Alm(arr.arre_alm[i]);
        printf("\n");
    }
}

void eliminar_alm(arr_con_tope &arr,long int cedula){
    int i = 0;
    while(dar_cedula(arr.arre_alm[i]) != cedula){
        i++;
    };
    for(i; i < arr.tope; i++){
        arr.arre_alm[i] = arr.arre_alm[i + 1];
    };
    arr.tope -= 1;
}

boolean buscar_alm(arr_con_tope arr,long int cedula){
    boolean existe = FALSE;
    int i = 0;
    while(i < arr.tope && !existe){
        if(dar_cedula(arr.arre_alm[i]) == cedula){
            existe = TRUE;
        } else {
            i++;
        }
    }
    return existe;
}
