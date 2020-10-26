#include<iostream>
using namespace std;

int findMajority(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int count=1;
        for(int j=i+1; j<n; j++)
        {
            if (arr[i]==arr[j])
                count++;
        }
        if (count > n/2)
            return i;
    }
    return -1;
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
    cout << "\nThe majority element is: " << findMajority(arr,n);
}
