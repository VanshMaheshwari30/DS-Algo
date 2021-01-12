#include <bits/stdc++.h>
using namespace std;

int largestSubarrayWithSumX(int arr[], int n, int sum)
{
    int prefix_sum = 0;
    unordered_set<int> us;
    us.insert(0);
    for(int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if(us.find(prefix_sum - sum) != us.end())
          return 1;
        us.insert(prefix_sum);
    }
    return 0;
}

int main(void) 
{
	int a[10],X;
    cout << "Enter 10 elements of array: " << endl;
    for (int i=0; i<10; i++)
        cin >> a[i];
    cout << "Original Array is: ";
    for (int i=0; i<10; i++)
        cout << a[i] << " ";
	int n=sizeof(a)/sizeof(a[0]);
	cout << "\nEnter the sum: ";
    cin >> X;
    cout <<"\nLongest subarray with given sum is: " << largestSubarrayWithSumX(a, n, X);
}
