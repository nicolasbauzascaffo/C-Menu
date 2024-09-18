#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED
#include <stdio.h>
#include "string.h"
#include "fecha.h"
#include "fecha.h"
#include "carrera.h"
#include "boolean.h"

typedef struct {
    long int cedula;
    String nombre;
    String apellido;
    fecha f_nac_alm;
    boolean es_bachiller;
    carrera carrera_alm;
    union {
        int creditos;
        int materias_ap;
        int anio_carrera;
    } datos;
} alumno;


void cargar_Alm(alumno &miAlumno);
void mostrar_Alm(alumno miAlumno);
long int dar_cedula(alumno miAlumno);
void dar_nombre(alumno miAlumno, String &s2);
void dar_apellido(alumno miAlumno, String &s2);
fecha dar_fecha(alumno miAlumno);
boolean dar_es_bachiller(alumno miAlumno);
carrera dar_carrera(alumno miAlumno);



#endif
