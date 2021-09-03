#include <iostream>

class LabelList;
struct Vertex;
struct VerticesList;
struct Relation;
class Graph;

void addVertices(Graph *graph);
void addRelations(Graph *graph);
void deleteVertices(Graph *graph);
void showGraph(Graph *graph);

class LabelList {
    int count;
    int lastLabel;
    std::string* labels;
    bool empty;

public:
    LabelList() {
        this->empty = true;
    }
    LabelList(int count) {
        this->count = count;
        this->lastLabel = -1;
        this->labels = new std::string[count];
        this->empty = false;
    }
    void add(std::string label, bool grow) {
        if(grow) this->grow(1);
        labels[++lastLabel] = label;
        empty = false;
    }
    void grow(int growth) {
        std::string* temp = new std::string[size() + growth];
        for(int i=0 ; i < this->size() ; i++) {
            temp[i] = this->get(i);
        }
        labels = temp;
    }
    std::string get(int pos) {
        return labels[pos];
    }
    void remove(int pos) {
        for(int i=pos ; i < lastLabel ; i++) {
            labels[i] = labels[i+1];
        }
        empty = --lastLabel == -1;
    }
    int size() {
        return lastLabel + 1;
    }
    bool isEmpty() {
        return empty;
    }
    std::string toString() {
        std::string visual = "";
        for(int i = 0 ; i <= lastLabel ; i++) {
            visual += labels[i] + " ";
        }
        return visual;
    }
};

struct Vertex {
    int numberNeighbors;
    LabelList relatedLabels;
    std::string label;
    Vertex* next;

    Vertex() {
        label = "";
        next = nullptr;
        numberNeighbors = 0;
        relatedLabels = LabelList(numberNeighbors);
    }
    Vertex(std::string label) {
        this->label = label;
        next = nullptr;
        numberNeighbors = 0;
        relatedLabels = LabelList(numberNeighbors);
    }
    bool equals(Vertex* vertex) {
        return this->label == vertex->label;
    }
    void addNeighbor() {
        LabelList temp = LabelList(numberNeighbors+1);
        for(int i=0 ; i < numberNeighbors ; i++) temp.add(relatedLabels.get(i), true);
        relatedLabels = temp;
    }
};

struct VerticesList {
    Vertex *head;
    Vertex *end;

    VerticesList() {
        head = new Vertex();
        end = head;
    }

    void add(std::string label) {
        end->next = new Vertex(label);
        end = end->next;
    }
    void remove(std::string label) {
        Vertex* temp = nullptr;
        for(temp = head->next ; temp->next != nullptr && temp->next->label != label ; temp=temp->next);

        if(temp == nullptr) return;

        Vertex* deleted = temp->next;

        temp->next = temp->next == end ? nullptr : temp->next->next;
        delete deleted;
    }
    int size() {
        int _size = 0;
        for(Vertex* temp = head->next ; temp != nullptr ; temp=temp->next) {
            _size++;
        }
        return _size;
    }
    std::string toString() {
        std::string visual = "";
        Vertex* temp = head->next;

        for( ; temp->next != nullptr ; temp=temp->next) {
            visual += temp->label + "->";
        }
        return visual + temp->label;
    }
};

struct Relation {
    VerticesList* verticesList;
    Relation* next;

    Relation() {
        verticesList = new VerticesList();
    }

    Vertex* getParentNode() {
        return verticesList->head->next;
    }
    bool isNotDuplicated(std::string label) {
        int verticesFound = 0;

        for(Vertex* temp = verticesList->head ; temp->next != nullptr ; temp=temp->next) {
            if(temp->next->label == label) verticesFound++;
            if(verticesFound > 1) return false;
        }
        return true;
    }
};

class Graph {
private:
    Relation *head;
    Relation *end;
    int numberVertices;

    void add(std::string label) {
        end->next = new Relation();
        end->next->verticesList->add(label);
        end = end->next;
    }

public:
    Graph() {
        numberVertices = 0;
        initialize();
    }

    void initialize() {
        head = new Relation();
        end = head;
    }
    void addVertex(std::string label) {
        for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
            // exit if found already
            if (temp->getParentNode()->label == label) return;
        }

        add(label);
        numberVertices++;
    }
    void addRelation(std::string from, std::string to) {
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
    void deleteVertex(std::string label) {
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
    std::string toString() {
        std::string visual = "";
        for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
            visual += temp->verticesList->toString() + "\n";
        }
        return visual;
    }

    void removeRelation(std::string from, std::string to) {
        for (Relation *temp = head->next; temp != nullptr; temp = temp->next) {
            if (temp->getParentNode()->label == from ) {
                temp->verticesList->remove(to);
                return;
            }
        }
    }
};

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
    graph->addRelation("1", "4");
    graph->addRelation("3", "4");
    graph->addRelation("4", "4");
    graph->addRelation("4", "4");
    graph->addRelation("4", "4");
    graph->addRelation("4", "4");
    graph->addRelation("4", "4");

    graph->addRelation("5", "2");
    graph->addRelation("5", "3");
    graph->addRelation("2", "4");
    graph->addRelation("4", "2");
}

void addVertices(Graph *graph) {
    graph->addVertex("1");
    graph->addVertex("2");
    graph->addVertex("3");
    graph->addVertex("4");
    graph->addVertex("5");
}
