#ifndef DIRECTED_MATRIX
#define DIRECTED_MATRIX

#include <string>
#include "Row.h"

struct Matrix {
    Row *rows;
    int size;
    std::string* labels;

    Matrix();
    void add(std::string);
    int grow();
    void addRelation(std::string, std::string, int);
    void removeRelation(std::string, std::string);
    std::string toString();
    void remove(std::string);
    int getVertexPosition(std::string);
};

#endif //DIRECTED_MATRIX
