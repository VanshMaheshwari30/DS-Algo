#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int x)
{
	int low = 0, high = n - 1;
    while(low <= high)
	{
		int mid = (low + high) / 2;
        if(x > arr[mid])
			low = mid + 1;
        else if(x < arr[mid])
			high = mid - 1;
        else
		{
			if(mid == 0 || arr[mid - 1] != arr[mid])
				return mid;
            else
				high = mid - 1;
		}
    }
    return -1;
}

int lastOcc(int arr[], int n, int x)
{
	int low = 0, high = n - 1;
    while(low <= high)
	{
		int mid = (low + high) / 2;
        if(x > arr[mid])
			low = mid + 1;
        else if(x < arr[mid])
			high = mid - 1;
        else
		{
			if(mid == n - 1 || arr[mid + 1] != arr[mid])
				return mid;
            else
				low = mid + 1;
		}
    }
    return -1;
}

int countOcc(int arr[], int n, int x)
{
	int first = firstOcc(arr, n, x);

	if(first == -1)
		return 0;
	else 
		return lastOcc(arr, n, x) - first + 1;
}

int main(void)
{
    int n,x;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the element whose occurence is to be counted in array: ";
    cin >> x;
    int arr[n];
    cout << "Enter the elements of array in ascending order: \n";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The array is: ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout<<"\nThe number of times  element occurs is: " << countOcc(arr,n,x);
}
