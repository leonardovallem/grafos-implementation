#define DELETED 0xFFFFFFFF
#include "Linha.h"
#include <string>
#include <iostream>

Linha::Linha(int peso) {
    this->peso = peso;
    colunas = (int*) malloc(sizeof(int)*1);
    colunas[0] = 0;
    tamanho = 1;
}

Linha::Linha(int peso, int tamanho) {
    this->peso = peso;
    colunas = (int*) malloc(sizeof(int)*tamanho);
    for(int i = 0; i<tamanho; i++) colunas[i] = 0;
    this->tamanho = tamanho;
}

void Linha::add() {
    int next = grow();
    colunas[next] = 0;
    tamanho++;
}

int Linha::grow() {
    int length = sizeof (colunas) / sizeof (int);
    int* novasColunas = (int*) malloc(sizeof(int) * (length+1));
    int i = 0;
    for(; i < length; i++) {
        novasColunas[i] = colunas[i];
    }
    colunas = novasColunas;
    return i;
}

void Linha::set(int posVertex) {
    colunas[posVertex] = 1;
}

void Linha::reset(int posVertex) {
    colunas[posVertex] = 0;
}

std::string Linha::toString() {
    std::string visual = "";
    for(int i=0 ; i < tamanho-1 ; i++) {
        visual += std::to_string(colunas[i]) + " -> ";
    }
    return visual + std::to_string(colunas[tamanho-1]);
}

void Linha::remove() {
    deletado = DELETED;
}

void Linha::removeColumn(int columnPos) {
    colunas[columnPos] = DELETED;
}