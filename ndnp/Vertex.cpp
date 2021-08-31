#include "Vertex.h"
#include <string>

Vertex::Vertex() {
    label = "";
    next = nullptr;
}

Vertex::Vertex(std::string label) {
    this->label = label;
    next = nullptr;
}

bool Vertex::equals(Vertex* vertex) {
    return this->label == vertex->label;
}