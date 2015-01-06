#include "coelho.h"


struct coelhos{
           enum genero{macho, femea};
           enum condicao{nGravida,gravida};
           int idade;
        };
 void coelho::avancarIdade( coelhos c){
     if ((c.genero==femea)&&(c.condicao==nGravida)){
        if (c.idade==0){
            c.idade++;
        }
        else{
            c.idade++;
            c.condicao=gravida;
        }
 }
void coelho::crescerLista(list<coelhos> &C, int total){
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

}

