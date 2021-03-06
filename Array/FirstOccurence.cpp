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
    cout<<"\nThe first occurence of element occurs is at: " << firstOcc(arr,n,x);
}
