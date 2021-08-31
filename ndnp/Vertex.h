//
// Created by jmarc on 29/08/2021.
//

#ifndef GRAFOS_VERTEX_H
#define GRAFOS_VERTEX_H

#include <string>
struct Vertex {
    std::string label;
    Vertex* next;

    Vertex();
    Vertex(std::string label);
    bool equals(Vertex*);
};


#endif //GRAFOS_VERTEX_H
