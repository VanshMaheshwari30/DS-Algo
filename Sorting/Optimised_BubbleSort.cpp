#include <bits/stdc++.h>
using namespace std;

void bubblesort(int a[],int n)
{
    for (int i=0; i<n-1; i++)
    {
        bool swapped = false;
        for (int j=0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main(void)
{
    int arr[10],i,ans;
    cout << "Enter 10 elements in array: " << endl;
    for (int i=0; i<10; i++)
        cin >> arr[i];
    cout << "Original Array is: ";
    for (int i=0; i<10; i++)
        cout << arr[i] << " ";
    cout << "\n";
    bubblesort(arr,10);
    cout << "Array after sorting is: ";
    for (int i=0; i<10; i++)
        cout << arr[i] << " ";
}
