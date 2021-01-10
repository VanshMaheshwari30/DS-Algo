#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
    unordered_set<int> us;
    for(int i = 0; i < n; i++)
        us.insert(arr[i]);
    return us.size();
}

int main(void) 
{
	int a[10];
    cout << "Enter 10 elements of array: " << endl;
    for (int i=0; i<10; i++)
        cin >> a[i];
    cout << "Original Array is: ";
    for (int i=0; i<10; i++)
        cout << a[i] << " ";
	int n=sizeof(a)/sizeof(a[0]);
	cout <<"\nNumber of distinct elements in the array are: " << countDistinct(a, n);
}
