#include "Vertex.h"
#include <string>

Vertex::Vertex() {
    label = "";
    next = nullptr;
    numberNeighbors = 0;
    relatedLabels = LabelList(numberNeighbors);
}

Vertex::Vertex(std::string label) {
    this->label = label;
    next = nullptr;
    numberNeighbors = 0;
    relatedLabels = LabelList(numberNeighbors);
}

bool Vertex::equals(Vertex* vertex) {
    return this->label == vertex->label;
}

void Vertex::addNeighbor() {
    LabelList temp = LabelList(numberNeighbors+1);
    for(int i=0 ; i < numberNeighbors ; i++) temp.add(relatedLabels.get(i), true);
    relatedLabels = temp;
}