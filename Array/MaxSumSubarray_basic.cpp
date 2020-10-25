#include<iostream>
using namespace std;

int maxSum(int arr[], int n)
{
    int res=arr[0];
    for(int i=0; i<n; i++)
    {
        int curr=0;
        for (int j=i; j<n; j++)
        {
            curr = curr + arr[j];
            res = max(res,curr);
        }
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
