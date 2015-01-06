#include <iostream>
#include "coelhos.h"
using namespace std;



int coelhos::contagemFemeas(int n)
{
    mes = 0;
    indiceAtual = 1;
    indiceAnterior = 1;
    memoria = 0;
    if (n < 0){ return 0;}
    else if(n == 0){ return 1;}
    else{
        for(;mes < n; mes++){
                    cout<<"mes: "<<mes<<" indiceAtual: "<<indiceAtual<<" indiceAnterior: "<<indiceAnterior<<" memoria: "<<memoria<<"\n";
                    memoria = indiceAtual;
                    cout<<"memoria = "<<memoria<<"\n";
                    indiceAtual += indiceAnterior;
                    cout<<"indiceAtual ="<<indiceAtual<<"\n";
                    indiceAnterior = memoria;
                    cout<<"indiceAnterior ="<<indiceAnterior<<"\n";
        }
        return indiceAtual;
}
}
