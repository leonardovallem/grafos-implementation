#include "Graph.h"
#include <string>

Graph::Graph() {
    numberVertices = 0;
    initialize();
}

void Graph::initialize() {
    head = new Relation();
    end = head;
}

std::string Graph::toString() {
    std::string visual = "";
    for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
        visual += temp->verticesList->toString() + "\n";
    }
    return visual;
}

// adds a vertex to the graph
void Graph::addVertex(std::string label) {
    for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
        // exit if found already
        if (temp->getParentNode()->label == label) return;
    }

    add(label);
    numberVertices++;
}

// insert the graph in the structure
void Graph::add(std::string label) {
    end->next = new Relation();
    end->next->verticesList->add(label);
    end = end->next;
}

// adds a relation directed from a vertex to another
void Graph::addRelation(std::string from, std::string to) {
    for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
        if (temp->getParentNode()->label == from && temp->isNotDuplicated(to)) {
            temp->verticesList->add(to);
            for (Relation *i = head->next; i != nullptr; i = i->next) {
                Vertex* parent = i->getParentNode();
                if(parent->label == to) {
                    parent->relatedLabels.add(from, true);
                    break;
                }
            }
            return;
        }
    }
}

// removes a relation directed from a vertex to another
void Graph::removeRelation(std::string from, std::string to) {
    for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
        if (temp->getParentNode()->label == from ) {
            temp->verticesList->remove(to);
            return;
        }
    }
}

// removes a vertex from the graph
void Graph::deleteVertex(std::string label) {
    LabelList droppedVertices;
    for (Relation *temp = head; temp->next != nullptr; temp = temp->next) {
        Vertex* parent = temp->next->getParentNode();
        if (parent->label == label) {
            droppedVertices = parent->relatedLabels;

            Relation *deleted = temp->next;
            temp->next = temp->next->next;
            numberVertices--;

            if (numberVertices == 0) initialize();
            delete deleted;
            break;
        }
    }

    if (droppedVertices.isEmpty()) return;

    for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
        for (int i = 0; i < droppedVertices.size(); i++) {

            std::string parentNode = temp->getParentNode()->label;
            std::string droppedNode = droppedVertices.get(i);

            if (parentNode == droppedNode) {
                temp->verticesList->remove(label);
                droppedVertices.remove(i);
                break;
            }
        }
    }
}
