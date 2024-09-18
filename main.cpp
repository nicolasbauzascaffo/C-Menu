#include <stdio.h>
#include "arreglo_tope.h"

int main() {
    int op;
    arr_con_tope arr;
    inicializar(arr);
    while(op != 4){
        printf("\n");
        printf("Menu");
        printf("\n");
        printf("1-Agregar alumno");
        printf("\n");
        printf("2-Eliminar alumno por cedula");
        printf("\n");
        printf("3-Mostrar lista completa de alumnos");
        printf("\n");
        printf("4-Salir");
        printf("\n");
        printf("\n");
        printf("Ingrese la opcion para continuar: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("\n");
                cargar_arr(arr);
                printf("\n");
                break;
            case 2:
                long int cedula;
                printf("Ingrese la cedula del alumno para eliminarlo: ");
                scanf("%ld", &cedula);
                boolean ex;
                ex = buscar_alm(arr,cedula);
                if(!ex){
                    printf("\n");
                    printf("No existe alumno con dicha cedula");
                    printf("\n");
                } else {
                    printf("\n");
                    eliminar_alm(arr,cedula);
                    printf("\n");
                }
                break;
            case 3:
                printf("\n");
                mostrar_arr(arr);
                printf("\n");
                break;
            case 4:
                printf("\n");
                printf("Usted ha salido del programa!");
                printf("\n");
                break;
        }

    }
}
