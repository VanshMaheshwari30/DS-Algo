#include<iostream>
using namespace std;

void Leader(int arr[], int n)
{
    cout <<"\nThe leaders of array are: \n";
    for (int i=0; i<n; i++)
    {
        bool flag = false;
        for (int j=i+1; j<n; j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=true;
                break;
            }
        }
        if (flag==false)
        {
            cout << arr[i] << " ";
        }
    }
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
    Leader(arr,n); 
}
