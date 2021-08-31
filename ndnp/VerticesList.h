//
// Created by jmarc on 29/08/2021.
//

#ifndef GRAFOS_VERTICESLIST_H
#define GRAFOS_VERTICESLIST_H

#include "Vertex.h"
#include <string>

class LabelList {
    int count;
    int lastLabel;
    std::string* labels;
    bool empty;

public:
    LabelList();
    LabelList(int);
    void add(std::string);
    std::string get(int);
    void remove(int);
    void remove(std::string);
    std::string pop(int);
    int size();
    bool isEmpty();
    std::string toString();
};

struct VerticesList {
    Vertex *head;
    Vertex *end;

    VerticesList();

    void add(std::string label);
    void remove(std::string label);
    int size();
    LabelList relatedLabels();
    std::string toString();
};

#endif //GRAFOS_VERTICESLIST_H
