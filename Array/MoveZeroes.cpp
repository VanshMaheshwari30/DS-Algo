#include<iostream>
using namespace std;

int moveZeroes(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
    cout << "\nThe new array: \n";
    for (int i=0; i<n; i++)
        cout << arr[i] <<" ";
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
    cout << "The original array: \n";
    for (int i=0; i<n; i++)
        cout << arr[i] <<" ";
    moveZeroes(arr,n); 
}
