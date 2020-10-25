#include<iostream>
using namespace std;

int maxProfit(int price[], int n)
{
    int profit=0;
    for(int i=1; i<n; i++)
    {
        if (price[i]>price[i-1])
        {
            profit += price[i]-price[i-1];
        }
    }
    return profit;
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
    cout<< "\nThe max profit is: " << maxProfit(arr,n);
}
