#ifndef UNDIRECTED_ROW
#define UNDIRECTED_ROW

#include <string>

struct Row {
    int* columns;
    int size;
    bool deleted;

    Row();
    Row(int size);
    int grow();
    void add();
    void set(int pos, int weight);
    void reset(int posVertex);
    void remove();
    void removeColumn(int columnPos);
    std::string toString();
};

#endif //UNDIRECTED_ROW
