#include<stdio.h>
#include<iostream>
using namespace std;

int subArraySum(int arr[], int n, int sum) 
{ 
	int curr_sum = arr[0], start = 0, i; 
    for (i = 1; i <= n; i++) 
	{ 
		while (curr_sum > sum && start < i-1) 
		{ 
			curr_sum = curr_sum - arr[start]; 
			start++; 
		} 
        if (curr_sum == sum) 
		{ 
			printf ("\nSum found between indexes %d and %d", start, i-1); 
			return 1; 
		} 
        if (i < n) 
		curr_sum = curr_sum + arr[i]; 
	} 
    printf("No subarray found"); 
	return 0; 
} 

int main(void)
{
    int n,sum;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the sum: ";
    cin >> sum;
    int arr[n];
    cout << "Enter the elements of array: \n";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The original array is: \n";
    for (int i=0; i<n; i++)
        cout << arr[i] <<" ";
    subArraySum(arr,n,sum);
}
