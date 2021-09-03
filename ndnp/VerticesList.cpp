#include "Vertex.h"
#include "VerticesList.h"

LabelList::LabelList() {
    this->empty = true;
}

LabelList::LabelList(int count) {
    this->count = count;
    this->lastLabel = -1;
    this->labels = new std::string[count];
    this->empty = false;
}

void LabelList::add(std::string label) {
    labels[++lastLabel] = label;
    empty = false;
}

void LabelList::remove(int pos) {
    for (int i = pos; i < lastLabel; i++) {
        labels[i] = labels[i + 1];
    }
    empty = --lastLabel == -1;
}

std::string LabelList::get(int pos) {
    return labels[pos];
}

std::string LabelList::pop(int pos) {
    std::string item = get(pos);
    remove(pos);
    return item;
}

std::string LabelList::toString() {
    std::string visual = "";
    for (int i = 0; i <= lastLabel; i++) {
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


VerticesList::VerticesList() {
    head = new Vertex();
    end = head;
}

void VerticesList::add(std::string label) {
    end->next = new Vertex(label);
    end = end->next;
}


void VerticesList::remove(std::string label) {
    Vertex *temp = nullptr;
    for (temp = head->next; temp->next != nullptr && temp->next->label != label; temp = temp->next);

    if (temp == nullptr) return;
    Vertex *deleted = temp->next;

    if (temp->next == nullptr) {
        temp->next = nullptr;
        end = temp;
    } else temp->next = temp->next->next;

    delete deleted;
}

std::string VerticesList::toString() {
    std::string visual = "";
    Vertex *temp = head->next;

    for (; temp->next != nullptr; temp = temp->next) {
        visual += temp->label + "->";
    }
    return visual + temp->label;
}

int VerticesList::size() {
    int _size = 0;
    for (Vertex *temp = head->next; temp != nullptr; temp = temp->next) {
        _size++;
    }
    return _size;
}

LabelList VerticesList::relatedLabels() {
    LabelList labels(size() - 1);

    for (Vertex *temp = head->next->next; temp != nullptr; temp = temp->next) {
        labels.add(temp->label);
    }

    return labels;
}
