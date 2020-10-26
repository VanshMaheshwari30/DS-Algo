#include<iostream>
using namespace std;

int maxCircularSum(int arr[], int n)
{
    int res = arr[0];
    for(int i=0; i<n; i++)
    {
        int curr_max = arr[i];
        int curr_sum = arr[i];
        for(int j=1; j<n; j++)
        {
            int index = (i+j)%n;
            curr_sum += arr[index];
            curr_max = max(curr_max,curr_sum);
        }
        res = max(res,curr_max);
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
    cout << "\nThe maximum circular subarray sum is: " << maxCircularSum(arr,n);
}
