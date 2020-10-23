#include<iostream>
using namespace std;

int printFreq(int arr[], int n)
{
    cout << "\nThe frequency of elements is: \n";
    int freq=1, i=1;
    while (i<n)
    {
        while (i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout << arr[i-1] << " --> " << freq << endl;
        i++;
        freq=1; 
    }
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
    printFreq(arr,n);
}
