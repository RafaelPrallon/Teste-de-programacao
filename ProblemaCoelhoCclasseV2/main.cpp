#include <iostream>
#include <list>

#include"coelho.h"

using namespace std;

int contagem( int n )
{
    int mes = 0;
    int indiceAtual = 1;
    int indiceAnterior = 1;
    int memoria = 0;
    if(n == 0){ return 1;}
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

int main()
{
    coelho::coelhos C1={coelho.macho,coelho.nGravida,0},C2={coelho.femea,coelho.nGravida,0};
    coelho::coelhos i[]={C1,C2};
    list <coelho::coelhos> C(i,i+sizeof(coelho::coelhos)/sizeof(coelho::coelhos));
    int n;
    int totalCoelhos=2;
    cout << "Digite o numero de meses:\n";
    cin >> n;
    if (n <0){ cout << "Digite um número maior ou igual a zero de meses.\n";}
    else{
        for(int tempo=0; tempo<n; tempo++){
            for (list<coelho::coelhos>::iterator it = C.begin(); it != C.end(); it++){
                coelho.avancarIdade(*it);
             }
            for (list<coelho::coelhos>::iterator it = C.begin(); it != C.end(); it++){
                coelho::crescerLista(&C,totalCoelhos);
             }
        }
    }


    return 0;}

