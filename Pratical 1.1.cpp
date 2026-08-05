#include <iostream>
using namespace std;

int main()
{
    int n, h;

    cout << "Enter size: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"Enter rotations: ";
    cin>>h;

    h = h % n;

    for(int r=0;r<h;r++)
    {
        int first=a[0];

        for(int i=0;i<n-1;i++)
            a[i]=a[i+1];

        a[n-1]=first;
    }

    cout<<"Final array: ";

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}