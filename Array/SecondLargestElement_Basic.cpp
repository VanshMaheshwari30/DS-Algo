#include<iostream>
using namespace std;

int getLargest(int arr[], int n)
{
    int res=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[res])
            res=i;
    }
    return res;
}

int secondLargest(int arr[], int n)
{
    int largest=getLargest(arr,n);
    int res=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[largest])
        {
            if(res==-1)
                res=i;
            else if(arr[i]>arr[res])
                res=i;
        }
    }
    return res;
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
    cout << "The index of second largest element is: "<< (secondLargest(arr,n))+1;
}
