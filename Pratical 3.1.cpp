#include<iostream>
using namespace std;

int main()
{
    int n,a[100];
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];

    // Bubble Sort
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);

    /*
    // Selection Sort
    for(int i=0;i<n-1;i++)48
    {
        int min=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[min])
                min=j;
        swap(a[i],a[min]);
    }
    */

    /*
    // Insertion Sort
    for(int i=1;i<n;i++)
    {
        int key=a[i],j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    */

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}