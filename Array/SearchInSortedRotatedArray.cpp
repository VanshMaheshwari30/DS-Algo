#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    int low=0, high=n-1;
    while (low<=high)
    {
        int mid= (low+high)/2;
        if (arr[mid]==x)
            return mid;
        if (arr[low]<arr[mid])
        {
            if (x >= arr[low] && x < arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        else
        {
            if (x > arr[mid] && x <= arr[high])
                low = mid+1;
            else
                high = mid-1;
        }
    }
    return -1;
}

int main(void)
{
    int n,x;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the element which is to be searched: ";
    cin >> x;
    int arr[n];
    cout << "Enter the elements of array in ascending order: \n";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The array is: ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout<<"\nThe element occurs at: " << search(arr,n,x);
}
