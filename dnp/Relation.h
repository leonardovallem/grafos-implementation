#ifndef DIRECTED_LIST_NODE
#define DIRECTED_LIST_NODE

#include "VerticesList.h"
#include "Vertex.h"

struct Relation {
    VerticesList* verticesList;
    Relation* next;

    Relation();

    Vertex* getParentNode();
    bool isNotDuplicated(std::string);
};

#endif //DIRECTED_LIST_NODE
