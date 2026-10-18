#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

void inorder(Node *r) {
    if (r == NULL) return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}

void preorder(Node *r) {
    if (r == NULL) return;
    cout << r->data << " ";
    preorder(r->left);
    preorder(r->right);
}

void postorder(Node *r) {
    if (r == NULL) return;
    postorder(r->left);
    postorder(r->right);
    cout << r->data << " ";
}

void levelorder(Node *r) {
    if (r == NULL) return;

    queue<Node*> q;
    q.push(r);

    while (!q.empty()) {
        Node *p = q.front();
        q.pop();

        cout << p->data << " ";

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
}

int main() {
    Node *root = new Node{1, NULL, NULL};

    root->left = new Node{2, NULL, NULL};
    root->right = new Node{3, NULL, NULL};
    root->left->left = new Node{4, NULL, NULL};
    root->left->right = new Node{5, NULL, NULL};

    cout << "Inorder: ";
    inorder(root);

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    cout << "\nLevel Order: ";
    levelorder(root);
}