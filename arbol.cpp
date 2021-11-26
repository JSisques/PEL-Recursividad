#include <iostream>
#include <string>

using namespace std;

struct Node {
    char valor;
    struct Node* izq;
    struct Node* dcha;

    Node(char v) {
        valor = v;
        izq = NULL;
        dcha = NULL;
    };
};

void pintarArbol(Node* nodo){
    if(nodo != NULL){
        cout << nodo->valor << endl;
        pintarArbol(nodo->izq);
        pintarArbol(nodo->dcha);
    }
}

main(int argc, char const* argv[]) {
    
    struct Node* padre = new Node('A');
    padre->izq = new Node('B');
    padre->dcha = new Node('C');

    padre->izq->izq = new Node('D');
    padre->izq->dcha = new Node('E');

    padre->dcha->dcha = new Node('F');

    pintarArbol(padre);

    return 0;
}