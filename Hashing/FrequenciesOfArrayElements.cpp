#include <bits/stdc++.h> 
using namespace std; 
  
void countFreq(int arr[], int n) 
{ 
    unordered_map<int, int> mp; 

    for (int i = 0; i < n; i++) 
        mp[arr[i]]++; 
  
    for (auto x : mp) 
        cout << x.first << " " << x.second << endl; 
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
	cout <<"\nFrequencies of elements in the array are: \n";
	countFreq(a, n);
}
