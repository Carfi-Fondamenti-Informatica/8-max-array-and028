#include <iostream>
#include "lib.h"
using namespace std;
int main() {

    int dim=0;
    float vettore[dim];

    cin>>dim;
    for (int i=0; i<dim; i++){
        cin>>vettore[i];
    }
    float massimo= max (vettore,dim);
    cout<<massimo<<endl;
    return 0;
}
