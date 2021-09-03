#include "Relation.h"

Vertex *Relation::getParentNode() {
    return verticesList->head->next;
}

Relation::Relation() {
    verticesList = new VerticesList();
}

bool Relation::contains(std::string label) {
    for (Vertex *temp = verticesList->head; temp->next != nullptr; temp = temp->next) {
        if (temp->next->label == label) return true;
    }
    return false;
}