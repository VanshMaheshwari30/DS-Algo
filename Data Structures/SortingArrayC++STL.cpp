#include<algorithm>
#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: \n";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "\nThe array is: ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    sort(arr,arr+n);
    cout << "\nThe sorted array is: ";
    for (int x: arr)
        cout << x << " ";
    sort(arr,arr+n,greater<int>());
    cout << "\nThe reverse sorted array is: ";
    for (int x: arr)
        cout << x << " ";
}
