#ifndef UNDIRECTED_LIST_NODE
#define UNDIRECTED_LIST_NODE

#include "VerticesList.h"

struct Relation {
    VerticesList* verticesList;
    Relation* next;

    Relation();

    Vertex* getParentNode();
    bool contains(std::string);
};

#endif //UNDIRECTED_LIST_NODE
