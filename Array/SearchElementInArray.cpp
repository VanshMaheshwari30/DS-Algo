#include <iostream>
using namespace std;

int search(int arr[], int x)
{
    int i=0;
    while(true)
    {
        if (arr[i]==x)
            return i;
        if (arr[i]>x)
            return -1;
        i++;
    }
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
    cout<<"\nThe element occurs at: " << search(arr,x);
}
