#include "lib.h"
float max(float vettore[],int dim){
    float massimo=vettore[0];
    for (int i=0;i<dim;i++){
        if (vettore[i]>massimo){
            massimo=vettore[i];
        }
    }
    return massimo
}
