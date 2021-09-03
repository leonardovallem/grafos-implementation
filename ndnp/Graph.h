#ifndef UNDIRECTED_LIST
#define UNDIRECTED_LIST
#include "string"
#include "VerticesList.h"
#include "Relation.h"

class Graph {
private:
    Relation* head;
    Relation* end;
    int numberVertices;

    void add(std::string label);
    void remove(int pos);
public:
    Graph();

    void initialize();
    void addVertex(std::string label);
    void addRelation(std::string labelA, std::string labelB);
    void deleteVertex(std::string label);
    int getNumberVertices();
    std::string toString();

    void removeRelation(std::string from, std::string to);
};

#endif //UNDIRECTED_LIST
