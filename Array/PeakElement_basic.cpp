#include <iostream>
using namespace std;

int getPeak(int arr[], int n)
{
	if(n == 1)
		return arr[0];
	if(arr[0] >= arr[1])
		return arr[0];
	if(arr[n - 1] >= arr[n - 2])
		return arr[n - 1];
    for(int i = 1; i < n - 1; i++)
		if(arr[i] >= arr[i - 1] && arr[i] <= arr[i + 1])
			return arr[i];
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
    cout << "The array is: ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout<<"\nThe peak element is: " << getPeak(arr,n);
}
