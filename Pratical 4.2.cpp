#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

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

void deleteValue(int x) {
    if (head == NULL) return;

    if (head->data == x) {
        Node* t = head;
        head = head->next;
        delete t;
        return;
    }

    Node* p = head;

    while (p->next != NULL && p->next->data != x)
        p = p->next;

    if (p->next != NULL) {
        Node* t = p->next;
        p->next = t->next;
        delete t;
    }
}

void display() {
    Node* p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void reverse(Node* p) {
    if (p == NULL) return;
    reverse(p->next);
    cout << p->data << " ";
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);

    cout << "Forward: ";
    display();

    deleteValue(20);

    cout << "After deletion: ";
    display();

    cout << "Reverse: ";
    reverse(head);

    return 0;
}