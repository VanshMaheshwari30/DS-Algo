#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int b[], int m, int n)
{
    int i=0, j=0;
    while (i<m && j<n)
    {
        if (a[i]<b[j]) { cout << a[i++] << " ";}
        else           { cout << b[j++] << " ";}
    }
    while (i<m)        { cout << a[i++] << " ";}
    while (j<n)        { cout << b[j++] << " ";}
}


int main(void)
{
    int a[10],b[10],i,ans;
    cout << "Enter 10 elements of first sorted array: " << endl;
    for (int i=0; i<10; i++)
        cin >> a[i];
    cout << "Enter 10 elements of second sorted array: " << endl;
    for (int i=0; i<10; i++)
        cin >> b[i];
    cout << "First Original Array is: ";
    for (int i=0; i<10; i++)
        cout << a[i] << " ";
    cout << "\nSecond Original Array is: ";
    for (int i=0; i<10; i++)
        cout <<b[i] << " ";
    cout << "\n";
    cout << "The sorted merged array is: ";
    merge(a,b,10,10);
}
