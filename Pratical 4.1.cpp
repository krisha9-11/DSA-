#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void display() {
    Node* p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void insertFront(int x) {
    Node* n = new Node{x, head};
    head = n;
}

void insertEnd(int x) {
    Node* n = new Node{x, NULL};

    if (head == NULL) {
        head = n;
        return;
    }

    Node* p = head;
    while (p->next != NULL)
        p = p->next;

    p->next = n;
}

void insertPos(int x, int pos) {
    if (pos == 1) {
        insertFront(x);
        return;
    }

    Node* p = head;

    for (int i = 1; i < pos - 1 && p != NULL; i++)
        p = p->next;

    if (p == NULL) {
        cout << "Invalid position\n";
        return;
    }

    Node* n = new Node{x, p->next};
    p->next = n;
}

int main() {
    insertFront(20);
    insertEnd(40);
    insertPos(30, 2);

    cout << "List: ";
    display();

    return 0;
}