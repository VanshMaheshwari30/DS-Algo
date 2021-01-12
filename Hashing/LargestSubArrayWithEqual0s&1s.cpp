#include <bits/stdc++.h>
using namespace std;

int largestZeroSubarray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
     arr[i] = (arr[i] == 0) ? -1 : 1;
     
    unordered_map<int, int> ump;
    int sum = 0, maxLen = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum == 0)
         maxLen = i+1;
         
        if(ump.find(sum+n) != ump.end())
        {
            if(maxLen < i - ump[sum+n])
             maxLen = i - ump[sum+n];
             
        }
        else ump[sum + n] = i;
    }
    
    return maxLen;
}

int main(void) 
{
	int a[10],X;
    cout << "Enter 10 elements of binary array: " << endl;
    for (int i=0; i<10; i++)
        cin >> a[i];
    cout << "Original Array is: ";
    for (int i=0; i<10; i++)
        cout << a[i] << " ";
	int n=sizeof(a)/sizeof(a[0]);
    cout <<"\nLongest subarray with equal 0's and 1's is: " << largestZeroSubarray(a, n);
}
