#ifndef DIRECTED_SUBLIST_NODE
#define DIRECTED_SUBLIST_NODE

#include <string>
#include "LabelList.h"

struct Vertex {
    int numberNeighbors;
    LabelList relatedLabels;
    std::string label;
    Vertex* next;

    Vertex();
    Vertex(std::string label);
    bool equals(Vertex*);
    void addNeighbor();
};

#endif //DIRECTED_SUBLIST_NODE
