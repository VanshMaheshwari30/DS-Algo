#include <iostream>
using namespace std;

int bSearch(int arr[], int low, int high, int x)
{
	if(low > high)
		return -1;
    int mid = (low + high) / 2;
    if(arr[mid] == x)
		return mid+1;
    else if(arr[mid] > x)
		return bSearch(arr, low, mid - 1, x);
    else
		return bSearch(arr, mid + 1, high, x);
}

int main(void)
{
    int n,x;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the element to be found in array: ";
    cin >> x;
    int arr[n];
    cout << "Enter the elements of array: \n";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The array is: ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout<<"\nThe element is at " << bSearch(arr, 0, n - 1, x) << " position.";
}
