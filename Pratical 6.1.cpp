#include <iostream>
using namespace std;

int stack[5], top = -1;

void push(int x) {
    if (top == 4)
        cout << "Stack Overflow\n";
    else
        stack[++top] = x;
}

void pop() {
    if (top == -1)
        cout << "Stack Underflow\n";
    else
        cout << "Popped: " << stack[top--] << endl;
}

void display() {
    if (top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Top: " << stack[top] << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}