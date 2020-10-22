#include<iostream>
using namespace std;

int getLargest(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        bool flag = true;
        for(int j=0; j<n; j++)
        {
            if (arr[j]>arr[i])
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
            return i;
    }
    return -1;
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
    cout << "The index of largest element is: "<< (getLargest(arr,n))+1 ;
}
