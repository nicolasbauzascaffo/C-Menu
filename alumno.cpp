#include "alumno.h"

void cargar_Alm(alumno &miAlumno){
    printf("Ingrese la cedula del alumno: ");
    scanf("%ld", &miAlumno.cedula);
    printf("\n");
    fflush(stdin);
    printf("Ingrese el nombre del alumno: ");
    cargar_String(miAlumno.nombre);
    printf("\n");
    fflush(stdin);
    printf("Ingrese el apellido del alumno: ");
    cargar_String(miAlumno.apellido);
    printf("\n");
    fflush(stdin);
    cargar_fecha(miAlumno.f_nac_alm);
    printf("\n");
    printf("El alumno es Bachillero o Ciclo Basico? T para si y F para no: ");
    cargar_bool(miAlumno.es_bachiller);
    printf("\n");
    fflush(stdin);
    printf("Marque carrera (1-INGENIERIA, 2-MEDICINA, 3-ABOGACIA): ");
    det_carrera(miAlumno.carrera_alm);
    printf("\n");
    carrera c = miAlumno.carrera_alm;
    switch(c){
        case INGENIERIA:
            printf("Ingrese los creditos del alumno: ");
            scanf("%d", &miAlumno.datos.creditos);
            break;
        case MEDICINA:
            printf("Ingrese las materias aprobadas del alumno: ");
            scanf("%d", &miAlumno.datos.materias_ap);
            break;
        case ABOGACIA:
            printf("Ingrese el anio de carrera del alumno: ");
            scanf("%d", &miAlumno.datos.anio_carrera);
            break;
    }
}

void mostrar_Alm(alumno miAlumno){
    printf("\n");
    printf("%ld", miAlumno.cedula);
    printf("\n");
    mostrar_String(miAlumno.nombre);
    printf("\n");
    mostrar_String(miAlumno.apellido);
    printf("\n");
    printf("Fecha de nacimiento: %d/%d/%d", miAlumno.f_nac_alm);
    printf("\n");
    boolean b = miAlumno.es_bachiller;
    if(b){
        printf("Es bachiller");
    } else {
        printf("No es bachiller");
    }
    printf("\n");
    carrera numero = miAlumno.carrera_alm;
    switch(numero){
        case INGENIERIA:
            printf("Carrera: Ingenieria");
            break;
        case MEDICINA:
            printf("Carrera: Medicina");
            break;
        case ABOGACIA:
            printf("Carrera: Abogacia");
            break;
    }
    printf("\n");
    carrera c = miAlumno.carrera_alm;
    switch(c){
        case INGENIERIA:
            printf("Creditos: %d", miAlumno.datos.creditos);
            break;
        case MEDICINA:
            printf("Materias aprobadas a la fecha: %d", miAlumno.datos.materias_ap);
            break;
        case ABOGACIA:
            printf("Anio de la carrera: %d", miAlumno.datos.anio_carrera);
            break;
    }
    printf("\n");
    printf("\n");
}

long int dar_cedula(alumno miAlumno){
    return miAlumno.cedula;
}

void dar_nombre(alumno miAlumno, String &s2){
    copy_string(miAlumno.nombre,s2);
}

void dar_apellido(alumno miAlumno,String &s2){
    copy_string(miAlumno.apellido,s2);
}

fecha dar_fecha(alumno miAlumno){
    return miAlumno.f_nac_alm;
}

boolean dar_es_bachiller(alumno miAlumno){
    return miAlumno.es_bachiller;
}

carrera dar_carrera(alumno miAlumno){
    return miAlumno.carrera_alm;
}





