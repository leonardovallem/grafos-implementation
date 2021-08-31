#ifndef GRAFOS_GRAPH_H
#define GRAFOS_GRAPH_H
#include "string"
#include "VerticesList.h"
#include "Relation.h"

class Graph {
private:
    Relation* head;
    Relation* end;

    void add(std::string label);
    void remove(int pos);
public:
    Graph();

    void addVertex(std::string label);
    void addRelation(std::string labelA, std::string labelB);
    void deleteVertex(std::string label);

    std::string toString();

    void initialize();
};

#endif //GRAFOS_GRAPH_H
