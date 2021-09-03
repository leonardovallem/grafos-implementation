#include "Graph.h"
#include <iostream>

void addVertices(Graph *graph);
void addRelations(Graph *graph);
void deleteVertices(Graph *graph);
void showGraph(Graph *graph);

int main() {
    Graph *graph = new Graph();

    addVertices(graph);
    addRelations(graph);

    showGraph(graph);

    deleteVertices(graph);
    addVertices(graph);
    addRelations(graph);

    showGraph(graph);

    return 0;
}

void showGraph(Graph *graph) { std::cout << graph->toString() << std::endl; }

void deleteVertices(Graph *graph) {
    graph->deleteVertex("5");
    graph->deleteVertex("3");
    graph->deleteVertex("4");
    graph->deleteVertex("2");
    graph->deleteVertex("1");
}

void addRelations(Graph *graph) {
    graph->addRelation("1", "2");
    graph->addRelation("1", "3");
    graph->addRelation("1", "4");

    graph->addRelation("3", "4");
    graph->addRelation("2", "5");
}

void addVertices(Graph *graph) {
    graph->addVertex("1");
    graph->addVertex("2");
    graph->addVertex("3");
    graph->addVertex("4");
    graph->addVertex("5");
}
