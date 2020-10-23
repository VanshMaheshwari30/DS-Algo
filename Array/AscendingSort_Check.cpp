#include<iostream>
using namespace std;

int isSorted(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: \n";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The array is sorted: "<< isSorted(arr,n); //prints 1 if array is in ascending order else 0.
}
