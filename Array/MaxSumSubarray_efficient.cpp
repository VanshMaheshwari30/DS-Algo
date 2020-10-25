#include<iostream>
using namespace std;

int maxSum(int arr[], int n)
{
    int res=arr[0];
    int maxEnding = arr[0];
    for(int i=1; i<n; i++)
    {
        maxEnding = max(maxEnding+arr[i], arr[i]);
        res = max(res,maxEnding);
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
    cout<< "\nThe maximum sum of subarray is: " << maxSum(arr,n);
}
