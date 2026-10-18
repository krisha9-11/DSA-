#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node *front = NULL, *rear = NULL;

void join(int x) {
    Node* n = new Node{x, NULL};

    if (rear == NULL) {
        front = rear = n;
    } else {
        rear->next = n;
        rear = n;
    }
}

void serve() {
    if (front == NULL) {
        cout << "Queue Empty\n";
        return;
    }

    Node* t = front;
    cout << "Served: " << front->data << endl;

    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete t;
}

void display() {
    Node* p = front;

    cout << "Queue: ";
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    cout << endl;
}

int main() {
    join(10);
    join(20);
    join(30);

    display();

    serve();

    display();

    return 0;
}