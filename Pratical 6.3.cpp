#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char st[50];
int top = -1;

int priority(char c) {
    if (c == '+' || c == '-')
        return 1;

    if (c == '*' || c == '/')
        return 2;

    return 0;
}

int main() {
    string s = "A+B*C";
    string post = "";

    for (char c : s) {

        if (isalnum(c))
            post += c;

        else if (c == '(')
            st[++top] = c;

        else if (c == ')') {
            while (st[top] != '(')
                post += st[top--];

            top--;
        }

        else {
            while (top != -1 &&
                   priority(st[top]) >= priority(c))
                post += st[top--];

            st[++top] = c;
        }
    }

    while (top != -1)
        post += st[top--];

    cout << "Postfix: " << post;

    return 0;
}