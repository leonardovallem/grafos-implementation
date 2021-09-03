#include <iostream>
#include "Matrix.h"

int main() {
    Matrix graph;

    graph.add("1");
    graph.add("2");
    graph.add("3");
    graph.add("4");
    graph.add("5");

    graph.addRelation("1", "4", 2);
    graph.addRelation("2", "3", 6);
    graph.addRelation("2", "5", -3);
    graph.addRelation("4", "3", 9);
    graph.addRelation("4", "5", 4);

    std::cout << graph.toString() << std::endl;
    graph.remove("2");

    std::cout << graph.toString() << std::endl;
    return 0;
}
