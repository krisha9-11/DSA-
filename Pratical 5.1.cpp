#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev, *next;
};

Node *head = NULL;

void addBegin(int x) {
    Node *n = new Node{x, NULL, head};

    if (head)
        head->prev = n;

    head = n;
}

void addEnd(int x) {
    Node *n = new Node{x, NULL, NULL};

    if (head == NULL) {
        head = n;
        return;
    }

    Node *p = head;

    while (p->next)
        p = p->next;

    p->next = n;
    n->prev = p;
}

void insertAfter(int key, int x) {
    Node *p = head;

    while (p && p->data != key)
        p = p->next;

    if (p == NULL) {
        cout << "Not found\n";
        return;
    }

    Node *n = new Node{x, p, p->next};

    if (p->next)
        p->next->prev = n;

    p->next = n;
}

void display() {
    Node *p = head;

    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
}

int main() {
    addBegin(10);
    addEnd(30);
    insertAfter(10, 20);

    cout << "Playlist: ";
    display();

    return 0;
}