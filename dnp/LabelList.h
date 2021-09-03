#ifndef LABEL_LIST
#define LABEL_LIST
#include <string>

class LabelList {
    int count;
    int lastLabel;
    std::string* labels;
    bool empty;

public:
    LabelList();
    LabelList(int);
    void add(std::string, bool);
    void grow(int growth);
    std::string get(int);
    void remove(int);
    int size();
    bool isEmpty();
    std::string toString();
};


#endif //LABEL_LIST
