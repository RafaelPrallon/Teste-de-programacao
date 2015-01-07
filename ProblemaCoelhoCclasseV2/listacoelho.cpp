#include "listacoelho.h"
#include "coelho.h"

listaCoelho::crescerLista(list<coelhos> &C, int total){
    int contador;
    for(list<coelhos>::iterator it=C.begin();it!=C.end();it++){
        if(*it.condicao==gravida){contador++;}
    }
    for(int progressor=0;progressor!=contador;progressor++){
        coelhos filhote={femea,nGravida,0};
        C.push_back(filhote);
        total++;
    }

}
int listaCoelho::listaFinalCoelho(int meses)
{
    coelho::genero masculino= coelho::macho, feminino=coelho::femea;
    coelho::coelhos C1={masculino,coelho::nGravida,0};
    coelho::coelhos C2={feminino,coelho::nGravida,0};
    coelho::coelhos i[]={C1,C2};
    int totalCoelhos=2;
    list <coelho::coelhos> C(i,i+sizeof(coelho::coelhos)/sizeof(coelho::coelhos));
    {
            for(int tempo=0; tempo<meses; tempo++){
                for (list<coelho::coelhos>::iterator it = C.begin(); it != C.end(); it++){
                    i.avancarIdade(*it);
                 }
                for (list<coelho::coelhos>::iterator it = C.begin(); it != C.end(); it++){
                   i.crescerLista(&C,totalCoelhos);
                 }
            }
        }

}
