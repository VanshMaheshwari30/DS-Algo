#include<iostream>
using namespace std;

int remDup(int arr[],int n)
{
    int res=1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }    
    cout << "\nThe new array: \n";
    for (int i=0; i<res; i++)
        cout << arr[i] <<" ";
}

int main(void)
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: \n";  //The array must be sorted.
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The original array: \n";
    for (int i=0; i<n; i++)
        cout << arr[i] <<" ";
    remDup(arr,n); 
}
