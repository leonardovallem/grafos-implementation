#define DELETED 0xFFFFFFFF
#include "Row.h"
#include <string>

Row::Row() {
    deleted = false;
    columns = (int*) malloc(sizeof(int) * 1);
    columns[0] = 0;
    size = 1;
}

Row::Row(int size) {
    deleted = false;
    columns = (int*) malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++) columns[i] = 0;
    this->size = size;
}

void Row::add() {
    int next = grow();
    columns[next] = 0;
    size++;
}

int Row::grow() {
    int length = sizeof (columns) / sizeof (int);
    int* newColumns = (int*) malloc(sizeof(int) * (length + 1));
    int i = 0;
    for(; i < length; i++) {
        newColumns[i] = columns[i];
    }
    columns = newColumns;
    return i;
}

void Row::set(int pos, int weight) {
    columns[pos] = weight;
}

void Row::reset(int pos) {
    columns[pos] = 0;
}

std::string Row::toString() {
    std::string visual = "";

    for(int i=0 ; i < size - 1 ; i++) {
        if(columns[i] != DELETED) visual += std::to_string(columns[i]) + "\t";
    }
    return visual;
}

void Row::remove() {
    deleted = true;
    for(int i=0 ; i < size - 1 ; i++)
        columns[i] = DELETED;
}

void Row::removeColumn(int pos) {
    columns[pos] = DELETED;
}