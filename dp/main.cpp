#include <iostream>
#include "Matrix.h"

int main() {
    Matrix grafo;
    grafo.add("1");
    grafo.add("2");
    grafo.add("3");
    grafo.add("4");

    grafo.addRelation("1", "2", 2);
    grafo.addRelation("3", "1", 5);
    grafo.addRelation("3", "4", 3);
    grafo.addRelation("4", "3", 9);
    grafo.addRelation("1", "4", 6);
    grafo.addRelation("2", "4", 1);
    grafo.addRelation("2", "3", 4);
    grafo.addRelation("4", "2", 7);
    grafo.addRelation("4", "4", 3);

    std::cout << grafo.toString() << std::endl;
    grafo.remove("2");

    std::cout << grafo.toString() << std::endl;
    return 0;
}
