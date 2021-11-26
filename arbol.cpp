#include <iostream>
#include <string>

using namespace std;

struct Node {
    int valor;
    struct Node* izq;
    struct Node* dcha;

    Node(int v) {
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
    
    struct Node* padre = new Node(1);
    padre->izq = new Node(7);
    padre->dcha = new Node(9);

    padre->izq->izq = new Node(20);
    padre->izq->dcha = new Node(80);

    padre->dcha->dcha = new Node(200);

    pintarArbol(padre);

    return 0;
}