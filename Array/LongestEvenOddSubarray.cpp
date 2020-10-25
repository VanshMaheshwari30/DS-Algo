#include<iostream>
using namespace std;

int maxEvenOdd (int arr[], int n)
{
    int res=1, curr=1;
    for(int i=1; i<n; i++)
    {
        if ((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
        {
            curr++;
            res = max(res,curr);
        }
        else
            curr=1;
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
    cout<< "\nThe longest even-odd subarray has " << maxEvenOdd(arr,n) << " elements.";
}
