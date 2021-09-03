#include "Vertex.h"
#include "VerticesList.h"

VerticesList::VerticesList() {
    head = new Vertex();
    end = head;
}

void VerticesList::add(std::string label) {
    end->next = new Vertex(label);
    end = end->next;
}


void VerticesList::remove(std::string label) {
    Vertex* temp = nullptr;
    for(temp = head->next ; temp->next != nullptr && temp->next->label != label ; temp=temp->next);

    if(temp == nullptr) return;

    Vertex* deleted = temp->next;

    temp->next = temp->next == end ? nullptr : temp->next->next;
    delete deleted;
}

std::string VerticesList::toString() {
    std::string visual = "";
    Vertex* temp = head->next;

    for( ; temp->next != nullptr ; temp=temp->next) {
        visual += temp->label + "->";
    }
    return visual + temp->label;
}

int VerticesList::size() {
    int _size = 0;
    for(Vertex* temp = head->next ; temp != nullptr ; temp=temp->next) {
        _size++;
    }
    return _size;
}