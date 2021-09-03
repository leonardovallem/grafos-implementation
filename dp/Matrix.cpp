#define DELETED 0xFFFFFFFF
#include "Matrix.h"
#include <string>
#include <iostream>

Matrix::Matrix() {
    rows = (Row*) malloc(sizeof(Row) * 1);
    rows[0].columns = new int[1];
    rows[0].columns[0] = 0;
    rows[0].size = 1;

    rows[0] = Row();
    size = 1;

    labels = new std::string[size];
}

void Matrix::add(std::string label) {
    int next = grow();
    rows[next] = Row(++size);
    labels[size - 2] = label;
}

void Matrix::addRelation(std::string vertexA, std::string vertexB, int weight) {
    int posA = getVertexPosition(vertexA);
    int posB = getVertexPosition(vertexB);

    if(posA == DELETED or posB == DELETED) return;

    rows[posA].set(posB, weight);
}

void Matrix::removeRelation(std::string vertexA, std::string vertexB) {
    int posA = getVertexPosition(vertexA);
    int posB = getVertexPosition(vertexB);

    if(posA == DELETED or posB == DELETED) return;

    rows[posA].reset(posB);
}

int Matrix::grow() {
    std::string* newLabels = new std::string[size + 1];
    Row* newRows = (Row*) malloc(sizeof(Row) * (size + 1) );
    rows->columns = new int[1];
    rows->columns[0] = 0;

    int i = 0;
    for(; i < size ; i++) {
        newLabels[i] = labels[i];
        newRows[i] = rows[i];
        newRows[i].add();
    }
    labels = newLabels;
    rows = newRows;
    return i;
}

std::string Matrix::toString() {
    std::string visual = "\t";
    int temp = 0;
    for(int i=0 ; i < rows[i].size - 1 ; i++) {
        if(rows[i].deleted) continue;
        visual += labels[temp++] + "\t";
    }
    visual += "\n";
    temp = 0;
    for(int i=0 ; i < size - 1 ; i++) {
        if(rows[i].deleted) continue;
        visual += labels[temp++] + "\t" + rows[i].toString() + "\n";
    }
    return visual;
}

void Matrix::remove(std::string vertex) {
    int pos = getVertexPosition(vertex);

    for(int i=pos ; i < size - 2 ; i++) labels[i] = labels[i + 1];

    rows[pos].remove();
    for(int i = 0; i < size ; i++) rows[i].removeColumn(pos);
}

int Matrix::getVertexPosition(std::string label) {
    for(int i=0 ; i < size - 1 ; i++) {
        if(labels[i] == label) return i;
    }
    return -1;
}