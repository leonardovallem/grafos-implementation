#ifndef DIRECTED_ROW
#define DIRECTED_ROW

#include <string>

struct Row {
    int* columns;
    int size;
    bool deleted;

    Row();
    Row(int);
    int grow();
    void add();
    void remove();
    void removeColumn(int);
    void set(int, int);
    void reset(int);
    std::string toString();
};

#endif //DIRECTED_ROW
