// Linear (Iterative)

#include <iostream>
using namespace std;

int main()
{
    int n, x;

    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the element to search: ";
    cin >> x;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            cout << "Found at index " << i;
            return 0;
        }
    }

    cout << "Not Found";

    return 0;
}