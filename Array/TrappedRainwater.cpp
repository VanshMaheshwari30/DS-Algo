#include<iostream>
using namespace std;

int getWater(int arr[], int n)
{
    int res=0;
    int lMax[n], rMax[n];
    
    lMax[0] = arr[0];
    for(int i=1; i<n; i++)
        lMax[i] = max(arr[i],lMax[i-1]);
    
    rMax[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--)
        rMax[i] = max(arr[i],rMax[i+1]);
    
    for (int i=1; i<n-1; i++)
        res = res + (min(lMax[i],rMax[i]) - arr[i]);
    return res; 
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
    cout<< "\nThe trapped units of Rainwater are: " << getWater(arr,n);
}
