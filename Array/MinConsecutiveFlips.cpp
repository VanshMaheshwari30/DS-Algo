#include<iostream>
using namespace std;

int printGroups(int arr[], int n)
{
    for (int i=1; i<n; i++)
    {
        if (arr[i]!=arr[i-1])
        {
            if (arr[i]!=arr[0])
            {
                cout << "From " << i <<" to ";
            }
            else
            {
                cout << i-1 << endl;
            }
        }
    }
    if (arr[n-1]!=arr[0])
        cout << n-1 << endl;
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
    cout << "\nThe minimum consecutive flips is: " << printGroups(arr,n);
}
