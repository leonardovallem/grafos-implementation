#define DELETED 0xFFFFFFFF
#include "Matriz.h"
#include <string>
#include <iostream>

Matriz::Matriz(int peso) {
    linhas = (Linha*) malloc(sizeof(Linha)*1);
    linhas[0].peso = peso;
    linhas[0].colunas = new int[1];
    linhas[0].colunas[0] = 0;
    linhas[0].tamanho = 1;

    linhas[0] = Linha(peso);
    tamanho = 1;
}

void Matriz::add(int peso) {
    int next = grow();
    linhas[next] = Linha(peso, ++tamanho);
}

void Matriz::addRelation(int vertexA, int vertexB, bool fromAtoB) {
    if(vertexA == DELETED or vertexB == DELETED) return;
    vertexA--; vertexB--;

    if(fromAtoB) linhas[vertexA].set(vertexB);
    else linhas[vertexB].set(vertexA);
}

void Matriz::removeRelation(int vertexA, int vertexB, bool fromAtoB) {
    if(vertexA == DELETED or vertexB == DELETED) return;
    vertexA--; vertexB--;

    if(fromAtoB) linhas[vertexA].reset(vertexB);
    else linhas[vertexB].reset(vertexA);
}

int Matriz::grow() {

    Linha* novasLinhas =(Linha*) malloc(sizeof(Linha) * (tamanho + 1) );
    linhas->colunas = new int[1];
    linhas->colunas[0] = 0;

    int i = 0;
    for(; i < tamanho ; i++){
        novasLinhas[i] = linhas[i];
        novasLinhas[i].add();
    }
    linhas = novasLinhas;
    return i;
}

std::string Matriz::toString() {
    std::string visual = "";
    for(int i=0 ; i < tamanho ; i++) {
        visual += linhas[i].toString() + "\n";
    }
    return visual;
}

void Matriz::remove(int vertex) {
    linhas[vertex-1].remove();
    for(int i = 0; i < tamanho ; i++) linhas[i].removeColumn(vertex-1);
}