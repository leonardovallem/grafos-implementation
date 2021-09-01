#ifndef MATRIZADJACENCIA_MATRIZ_H
#define MATRIZADJACENCIA_MATRIZ_H

#include <string>
#include "linha.h"

struct Matriz {
    Linha *linhas;
    int tamanho;

    Matriz(int peso);
    void add(int peso);

    int grow();

    void addRelation(int vertexA, int vertexB, bool fromAtoB);

    void removeRelation(int vertexA, int vertexB, bool fromAtoB);

    std::__cxx11::basic_string<char> toString();

    int length() const;

    void remove(int vertex);
};


#endif //MATRIZADJACENCIA_MATRIZ_H
