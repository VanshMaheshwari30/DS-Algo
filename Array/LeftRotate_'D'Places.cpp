#include<iostream>
using namespace std;

void LeftRotateOne(int arr[], int n)
{
    int temp = arr[0];
    for(int i=1; i<n; i++)
        arr[i-1] =arr[i];
    arr[n-1] = temp;
}

void LeftRotate(int arr[], int n, int d)
{
    for (int i=0; i<d; i++)
        LeftRotateOne(arr,n);
    cout << "\nThe new array: \n";
    for (int i=0; i<n; i++)
        cout << arr[i] <<" ";
}

int main(void)
{
    int n,d;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the places to be rotated: ";
    cin >> d;
    int arr[n];
    cout << "Enter the elements of array: \n";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The original array: \n";
    for (int i=0; i<n; i++)
        cout << arr[i] <<" ";
    LeftRotate(arr,n,d); 
}
