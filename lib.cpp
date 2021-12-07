#include "lib.h"
float max (float vettore[],int dim){

    float massimo=0;
    for (int i=0; i<dim; i++){
        if(vettore[i]>vettore[i-1]){
            massimo=vettore[i];
        }
    }
    return massimo;
}
