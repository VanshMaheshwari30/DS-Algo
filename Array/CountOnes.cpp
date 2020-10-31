#include <iostream>
using namespace std;

int countOnes(int arr[], int n)
{
    int low=0, high=n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if (arr[mid]==0)
            low=mid+1;
        else
        {
            if((mid==0) || arr[mid-1]==0)
                return (n-mid);
            else
                high=mid-1;
        }
    }
    return 0;
}

int main(void)
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of  binary array in ascending order: \n";
    int arr[n];
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The array is: ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout<<"\nThe number of 1s in the sorted binary array are: " << countOnes(arr,n);
}
