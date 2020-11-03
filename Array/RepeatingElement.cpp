#include<iostream>
using namespace std;

int findRepeating (int arr[],int n)
{
    int slow = arr[0], fast = arr[0];
    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while(slow != fast);
    slow = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main(void)
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: \n";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The element that is repeated is: "<< findRepeating(arr,n);
}
