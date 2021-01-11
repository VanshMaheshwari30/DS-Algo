#include <bits/stdc++.h>
using namespace std;


int pairWithSumX(int arr[],int n, int X)
{
    unordered_set<int> us;
    for(int i = 0; i < n; i++)
    {
        if(us.find(X - arr[i]) != us.end())
          return 1;
          
        us.insert(arr[i]);
    }
    return 0;
    
}

int main(void) 
{
	int a[10],X;
    cout << "Enter 10 elements of array: " << endl;
    for (int i=0; i<10; i++)
        cin >> a[i];
    cout << "Original Array is: ";
    for (int i=0; i<10; i++)
        cout << a[i] << " ";
	int n=sizeof(a)/sizeof(a[0]);
	cout << "\nEnter the sum to be matched: ";
    cin >> X;
    cout <<"\nNumber of pairs with given sum are: " << pairWithSumX(a, n, X);
}
