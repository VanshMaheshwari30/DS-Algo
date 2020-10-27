#include<climits>
#include<iostream>
using namespace std;

int maxSum(int arr[], int n, int k)
{
	int max_sum = INT_MIN;
	for(int i = 0; i + k - 1 < n; i++)
	{
		int sum = 0;
        for(int j = 0; j < k; j++)
		{
			sum += arr[i + j];
		}
        max_sum = max(max_sum, sum);
	}
    return max_sum;
}

int main(void)
{
    int n,k;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the value of k: ";
    cin >> k;
    int arr[n];
    cout << "Enter the elements of array: \n";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The original array is: \n";
    for (int i=0; i<n; i++)
        cout << arr[i] <<" ";
    cout<< "\nThe maximum sum of consecutive elements is: " << maxSum(arr,n,k);
}
