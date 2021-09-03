#include <iostream>
#include "Relation.h"

Vertex *Relation::getParentNode() {
    return verticesList->head->next;
}

Relation::Relation() {
    verticesList = new VerticesList();
}

// return true if there's no more than 1 of the same vertex
// 2 is the maximum allowed (considering the one that will
// be added) since the vertex can have an edge to itself
bool Relation::isNotDuplicated(std::string label) {
    int verticesFound = 0;

    for(Vertex* temp = verticesList->head ; temp->next != nullptr ; temp=temp->next) {
        if(temp->next->label == label) verticesFound++;
        if(verticesFound > 1) return false;
    }
    return true;
}