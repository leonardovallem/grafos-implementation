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

void Graph::add(std::string label) {
    end->next = new Relation();
    end->next->verticesList->add(label);
    end = end->next;
}

std::string Graph::toString() {
    std::string visual = "";
    for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
        visual += temp->verticesList->toString() + "\n";
    }
    return visual;
}

// insert the graph in the structure
void Graph::addVertex(std::string label) {
    for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
        // exit if found already
        if (temp->getParentNode()->label == label) return;
    }

    add(label);
    numberVertices++;
}

// adds a relation directed from a vertex to another
void Graph::addRelation(std::string labelA, std::string labelB) {
    int verticesConnected = 0;

    for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
        // exit if found already
        if (temp->getParentNode()->label == labelA) {
            temp->verticesList->add(labelB);
            verticesConnected++;
            continue;
        }

        if (temp->getParentNode()->label == labelB) {
            temp->verticesList->add(labelA);
            verticesConnected++;
        }

        if (verticesConnected == 2) return;
    }
}

// removes a relation directed from a vertex to another
void Graph::removeRelation(std::string from, std::string to) {
    int sidesOfRelationRemoved = 0;
    for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
        if (temp->getParentNode()->label == from ) {
            temp->verticesList->remove(to);
            sidesOfRelationRemoved++;
        }
        if (temp->getParentNode()->label == to ) {
            temp->verticesList->remove(from);
            sidesOfRelationRemoved++;
        }

        if(sidesOfRelationRemoved == 2) return;
    }
}

// removes a vertex from the graph
void Graph::deleteVertex(std::string label) {
    LabelList droppedVertices;

    for (Relation *temp = head; temp->next != nullptr; temp = temp->next) {
        if (temp->next->getParentNode()->label == label) {
            droppedVertices = temp->next->verticesList->relatedLabels();

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