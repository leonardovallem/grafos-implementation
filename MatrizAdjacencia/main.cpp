#include <iostream>
#include "Matriz.h"

int main() {
    Matriz grafo(2);
    grafo.add(4);
    grafo.add(5);
    grafo.add(2);
    grafo.add(3);

    grafo.addRelation(1, 2, true);
    grafo.addRelation(3, 5, true);
    grafo.addRelation(1, 4, true);
    grafo.addRelation(2, 4, true);
    grafo.addRelation(4, 2, true);
    grafo.addRelation(4, 4, true);
//    std::cout << grafo.linhas[1].colunas[4] << std::endl;
    std::cout << grafo.toString() << std::endl;
    return 0;
}
