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
    float massimo= max (vettore,3);
    cout<<massimo<<endl;
    return 0;
}
