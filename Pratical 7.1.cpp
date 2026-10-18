#include <iostream>
using namespace std;

int q[5];
int front = 0, rear = -1;

void join(int x) {
    if (rear == 4)
        cout << "Queue Full\n";
    else
        q[++rear] = x;
}

void serve() {
    if (front > rear)
        cout << "Queue Empty\n";
    else
        cout << "Served: " << q[front++] << endl;
}

void display() {
    if (front > rear)
        cout << "Queue Empty\n";
    else {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
        cout << endl;
    }
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