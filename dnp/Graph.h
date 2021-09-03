#ifndef DIRECTED_LIST
#define DIRECTED_LIST

#include "string"
#include "VerticesList.h"
#include "Relation.h"

class Graph {
private:
    Relation *head;
    Relation *end;
    int numberVertices;

    void add(std::string label);

public:
    Graph();

    void initialize();
    void addVertex(std::string label);
    void addRelation(std::string from, std::string to);
    void deleteVertex(std::string label);
    std::string toString();

    void removeRelation(std::string from, std::string to);
};

#endif //DIRECTED_LIST
