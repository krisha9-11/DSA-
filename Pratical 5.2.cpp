#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};

void singlyCircular() {
    Node *a = new Node{10, NULL, NULL};
    Node *b = new Node{20, NULL, NULL};
    Node *c = new Node{30, NULL, NULL};

    a->next = b;
    b->next = c;
    c->next = a;

    cout << "Singly Circular: ";

    Node *p = a;
    do {
        cout << p->data << " ";
        p = p->next;
    } while (p != a);

    cout << endl;
}

void doublyCircular() {
    Node *a = new Node{10, NULL, NULL};
    Node *b = new Node{20, NULL, NULL};
    Node *c = new Node{30, NULL, NULL};

    a->next = b;
    b->next = c;
    c->next = a;

    a->prev = c;
    b->prev = a;
    c->prev = b;

    cout << "Doubly Circular: ";

    Node *p = a;
    do {
        cout << p->data << " ";
        p = p->next;
    } while (p != a);

    cout << endl;
}

int main() {
    singlyCircular();
    doublyCircular();

    return 0;
}