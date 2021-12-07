#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int dim=0;
    cin>>dim;
    float vettore[dim];
    for(int i=0; i<dim; i++){
        cin >> vettore[i];
    }
    cout<<max(vettore,dim)<<endl;

    return 0;
}
