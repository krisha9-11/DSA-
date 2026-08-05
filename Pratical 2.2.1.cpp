// Binary (Iterative)

#include <iostream>
using namespace std;

int main()
{
    int n, x;

    cout << "n: ";
    cin >> n;

    int a[n];

    cout << "Array: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Search: ";
    cin >> x;

    int low = 0, high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(a[mid] == x)
        {
            cout << "Found at " << mid;
            return 0;
        }
        else if(x < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << "Not Found";

    return 0;
}
