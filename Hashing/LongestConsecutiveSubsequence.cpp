#include <bits/stdc++.h>
using namespace std;

int findLongest(int arr[], int n)
{
    unordered_set<int> s;
    int res = 0;
 
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
 
    for (int i = 0; i < n; i++) {
        if (s.find(arr[i] - 1) == s.end()) {
            int curr = 1;
            while (s.find(curr+arr[i]) != s.end())
                curr++;
                
            res = max(res, curr);
        }
    }
    return res;
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
    cout <<"\nLongest consecutive subsequence is: " << findLongest(a, n);
}
