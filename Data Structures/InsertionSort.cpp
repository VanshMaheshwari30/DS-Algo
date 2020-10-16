#include<iostream>
using namespace std;

void insertion(int a[], int s) {
   int key, j;
   for(int i = 1; i<s; i++) 
    {
        key = a[i];
        j = i;
        while(j > 0 && a[j-1]>key) 
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = key;
    }
}

int main(void)
{
    int arr[10],i,ans;
    cout << "Enter 10 elements in array: " << endl;
    for (int i=0; i<10; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array is: ";
    for (int i=0; i<10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    insertion(arr,10);
    cout << "Array after sorting is: ";
    for (int i=0; i<10; i++)
    {
        cout << arr[i] << " ";
    }
}
