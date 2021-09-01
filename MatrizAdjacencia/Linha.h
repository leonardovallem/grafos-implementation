#ifndef MATRIZADJACENCIA_LINHA_H
#define MATRIZADJACENCIA_LINHA_H

#include <string>

class Linha {
public:
    int *colunas;
    int peso;
    int deletado = 0;
    int tamanho;
    Linha(int peso);
    Linha(int peso, int tamanho);
    int grow();
    void add();
    void remove();
    void set(int posVertex);
    void reset(int posVertex);
    std::__cxx11::basic_string<char> toString();

    static Linha* of(int peso) {
        Linha* linha = (Linha*) malloc(sizeof(Linha)*1);
        linha->peso = peso;
        linha->colunas = new int[1];
        linha->colunas[0] = 0;
        linha->tamanho = 0;

        return linha;
    }


    void removeColumn(int columnPos);
};



#endif //MATRIZADJACENCIA_LINHA_H
