#ifndef GRAFOS_RELATION_H
#define GRAFOS_RELATION_H

#include "VerticesList.h"

struct Relation {
    VerticesList* verticesList;
    Relation* next;

    Relation();

    Vertex* relationedNode();
    bool contains(std::string);
};



#endif //GRAFOS_RELATION_H
