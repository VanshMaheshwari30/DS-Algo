#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        int min_ind = i;
        for (int j=min_ind; j<n; j++)
            if (arr[j]<arr[min_ind])
                min_ind = j;
        swap(arr[min_ind],arr[i]);
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
    SelectionSort(arr,10);
    cout << "Array after sorting is: ";
    for (int i=0; i<10; i++)
        cout << arr[i] << " ";
}
