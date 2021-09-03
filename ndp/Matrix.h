#ifndef UNDIRECTED_MATRIX
#define UNDIRECTED_MATRIX

#include <string>
#include "Row.h"

struct Matrix {
    Row *rows;
    int size;
    std::string* labels;

    Matrix();
    void add(std::string);
    int grow();
    void addRelation(std::string vertexA, std::string vertexB, int weight);
    void removeRelation(std::string vertexA, std::string vertexB);
    std::string toString();
    void remove(std::string vertex);
    int getVertexPosition(std::string label);
};

#endif //UNDIRECTED_MATRIX
