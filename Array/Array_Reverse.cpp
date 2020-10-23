#include<iostream>
using namespace std;

int Reverse(int arr[],int n)
{
    int low=0, high=n-1;
    while(low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    cout << "\nThe reversed array: \n";
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
    Reverse(arr,n); 
}
