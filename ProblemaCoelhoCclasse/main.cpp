#include <iostream>
#include "coelhos.h"
using namespace std;

int main()
{
    coelhos c;
    int machos = 1;
    int femeas = 0;
    int total = 0;
    int meses;
    cout << "Digite o numero de meses" << endl;
    cin >> meses;
    cout<< "machos: "<<machos<<"\n";
    femeas = c.contagemFemeas(meses);
    cout<<"femeas: "<< femeas<<"\n";
    total = machos + femeas;
    cout<<"O total de coelhos apos "<< meses <<" mes/meses eh de "<<total<<" coelhos.\n";
    return 0;
}

