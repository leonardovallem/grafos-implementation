#include "LabelList.h"
#include <string>

LabelList::LabelList() {
    this->empty = true;
}

LabelList::LabelList(int count) {
    this->count = count;
    this->lastLabel = -1;
    this->labels = new std::string[count];
    this->empty = false;
}

void LabelList::grow(int growth) {
    std::string* temp = new std::string[size() + growth];
    for(int i=0 ; i < this->size() ; i++) {
        temp[i] = this->get(i);
    }
    labels = temp;
}

void LabelList::add(std::string label, bool grow) {
    if(grow) this->grow(1);
    labels[++lastLabel] = label;
    empty = false;
}

void LabelList::remove(int pos) {
    for(int i=pos ; i < lastLabel ; i++) {
        labels[i] = labels[i+1];
    }
    empty = --lastLabel == -1;
}

std::string LabelList::get(int pos) {
    return labels[pos];
}

std::string LabelList::toString() {
    std::string visual = "";
    for(int i = 0 ; i <= lastLabel ; i++) {
        visual += labels[i] + " ";
    }
    return visual;
}

int LabelList::size() {
    return lastLabel + 1;
}

bool LabelList::isEmpty() {
    return empty;
}