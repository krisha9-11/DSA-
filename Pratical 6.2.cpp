#include <iostream>
using namespace std;

struct Node {
    string page;
    Node* next;
};

Node* top = NULL;

void visit(string p) {
    Node* n = new Node{p, top};
    top = n;
}

void back() {
    if (top == NULL) {
        cout << "No previous page\n";
        return;
    }

    Node* t = top;
    top = top->next;
    delete t;
}

void current() {
    if (top == NULL)
        cout << "No page\n";
    else
        cout << "Current Page: " << top->page << endl;
}

int main() {
    visit("Google");
    visit("YouTube");
    visit("GitHub");

    current();

    back();
    current();

    return 0;
}