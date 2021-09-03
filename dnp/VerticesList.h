#ifndef DIRECTED_SUBLIST
#define DIRECTED_SUBLIST

#include <string>
#include "Vertex.h"

struct VerticesList {
    Vertex *head;
    Vertex *end;

    VerticesList();

    void add(std::string label);
    void remove(std::string label);
    int size();
    std::string toString();
};

#endif //DIRECTED_SUBLIST
