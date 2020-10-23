#include<iostream>
using namespace std;

int maxDiff(int arr[], int n)
{
    int res = arr[1]-arr[0], minVal = arr[0];
    for(int j=1; j<n; j++)
    {
        res = max(res,arr[j]-minVal);
        minVal = min(minVal,arr[j]);
    }
    return res;
}

int main(void)
{
    int n,d;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: \n";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The original array is: \n";
    for (int i=0; i<n; i++)
        cout << arr[i] <<" ";
    cout << "\nThe maximum difference is: " << maxDiff(arr,n);
}
