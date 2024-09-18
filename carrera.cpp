#include "carrera.h"

void det_carrera(carrera &c){
    int num;
    scanf("%d", &num);
    switch(num){
        case 1:
            c = INGENIERIA;
            break;
        case 2:
            c = MEDICINA;
            break;
        case 3:
            c = ABOGACIA;
            break;
    }
}
