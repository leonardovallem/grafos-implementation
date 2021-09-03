#ifndef UNDIRECTED_SUBLIST
#define UNDIRECTED_SUBLIST

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

#endif //UNDIRECTED_SUBLIST
