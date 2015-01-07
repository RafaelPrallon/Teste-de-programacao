#include "coelho.h"

enum genero{macho, femea};
enum condicao{nGravida,gravida};

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


}

