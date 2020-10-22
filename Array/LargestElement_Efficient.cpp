#include<iostream>
using namespace std;

int getLargest(int arr[], int n)
{
    int res=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[res])
            res=i;
    }
    return res;
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
    cout << "The index of largest element is: "<< (getLargest(arr,n))+1;
}
