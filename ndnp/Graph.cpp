#include "Graph.h"
#include <string>

Graph::Graph() {
    initialize();
}

void Graph::initialize() {
    head = new Relation();
    end = head;
}

void Graph::add(std::string label) {
    end->next = new Relation();
    end->next->verticesList->add(label);
    end = end->next;
}

void Graph::remove(int pos) {
    Relation *temp = head->next;
    for (int counter = 0; counter < pos + 1 && temp != nullptr; temp = temp->next);

    Relation *deleted = temp->next;
    temp->next = deleted->next;
    delete deleted;
}

std::string Graph::toString() {
    std::string visual = "";
    for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
        visual += temp->verticesList->toString() + "\n";
    }
    return visual;
}

void Graph::addVertex(std::string label) {
    for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
        // exist if found already
        if (temp->relationedNode()->label == label) return;
    }

    add(label);
}

void Graph::addRelation(std::string labelA, std::string labelB) {
    int verticesConnected = 0;

    for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
        // exist if found already
        if (temp->relationedNode()->label == labelA) {
            temp->verticesList->add(labelB);
            verticesConnected++;
            continue;
        }

        if (temp->relationedNode()->label == labelB) {
            temp->verticesList->add(labelA);
            verticesConnected++;
        }

        if (verticesConnected == 2) return;
    }
}

void Graph::deleteVertex(std::string label) {
    LabelList droppedVertices;

    for (Relation *temp = head; temp->next != nullptr; temp = temp->next) {
        if (temp->next->relationedNode()->label == label) {
            droppedVertices = temp->next->verticesList->relatedLabels();

            Relation *deleted = temp->next;
            temp->next = temp->next->next;

            if (head->next == end) initialize();
            delete deleted;
            break;
        }
    }

    if (droppedVertices.isEmpty()) return;

    for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
        for (int i = 0; i < droppedVertices.size(); i++) {

            auto noRelacionado = temp->relationedNode()->label;
            auto noDropado = droppedVertices.get(i);


            if (noRelacionado == noDropado) {
                temp->verticesList->remove(label);
                droppedVertices.remove(i);
                break;
            }
        }
    }
}