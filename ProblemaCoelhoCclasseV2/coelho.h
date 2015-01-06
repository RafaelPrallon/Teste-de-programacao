#ifndef COELHO_H
#define COELHO_H
#include <list>

using namespace std;
class coelho
{
public:
    enum genero{macho, femea};
    enum condicao{nGravida,gravida};
    struct coelhos {enum genero{macho, femea};
              enum condicao{nGravida,gravida};
              int idade;};

    void avancarIdade( coelhos);
    void crescerLista( list<coelhos>*, int);

};

#endif // COELHO_H
