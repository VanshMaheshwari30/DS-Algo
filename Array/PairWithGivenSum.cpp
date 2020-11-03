#include <iostream>
using namespace std;

bool isPair(int arr[], int n, int x)
{
    int left=0, right=n-1;
    while (left<right)
    {
        if (arr[left]+arr[right]==x)
            return true;
        else if (arr[left]+arr[right]>x)
            right--;
        else
            left++;
    }
    return false;
}

int main(void)
{
    int n,x;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the sum: ";
    cin >> x;
    int arr[n];
    cout << "Enter the elements of array in ascending order: \n";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The array is: ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout<< "\n" << isPair(arr,n,x); // prints 1 if pair exists else 0.
}
