#include <iostream>
using namespace std;

int main()
{
    int indiceAtual = 1;
    int indiceAnterior = 1;
    int memoria = 0;
    int mes = 0;
    int n;
    cout<<"Entre o numero de meses\n";
    cin>> n;
    cout<<"O numero inserido eh "<<n;
    cout << "\n";
    if (n < 0){return 0;}
    else if(n == 0) {return 2;}
    else{
        while(mes < n){
            cout<<" "<<mes;
            cout<<" "<<indiceAtual;
            cout<<" "<<indiceAnterior;
            cout<<" "<<memoria;
            cout<<"\n";
            memoria = indiceAtual;
            cout<<"memoria = "<<memoria<<"\n";
            indiceAtual += indiceAnterior;
            cout<<"indiceAtual ="<<indiceAtual<<"\n";
            indiceAnterior = memoria;
            cout<<"indiceAnterior ="<<indiceAnterior<<"\n";
            mes++;
            cout<< mes<<"\n";
        }
    }
    indiceAtual++;
    cout <<"O numero de coelhos eh "<< indiceAtual;
    return 0;
}
