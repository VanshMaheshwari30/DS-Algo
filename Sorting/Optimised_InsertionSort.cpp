#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
    InsertionSort(arr,10);
    cout << "Array after sorting is: ";
    for (int i=0; i<10; i++)
        cout << arr[i] << " ";
}
