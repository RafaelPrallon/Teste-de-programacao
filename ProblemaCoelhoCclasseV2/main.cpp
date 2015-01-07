#include <iostream>
#include <list>

#include"listacoelho.h"

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
    listaCoelho lista;
    int n;
    cout << "Digite o numero de meses:\n";
    cin >> n;
    if (n <0){ cout << "Digite um número maior ou igual a zero de meses.\n";}
    else{
    int resultado = lista.listaFinalCoelho(n);
    cout<<"O total de coelhos apos "<< n<<" meses eh "<<resultado<<".";
    }
    return 0;}

