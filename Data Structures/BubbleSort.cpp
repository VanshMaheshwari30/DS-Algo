#include<iostream>
using namespace std;

void bubble (int a[],int s)
{
    int i=0,j,t;
    while(i<s)
    {
        j=0;
        while (j<s-i-1)
        {
            if (a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    int arr[10],i,ans;
    cout << "Enter 10 elements in array: " << endl;
    for (int i=0; i<10; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array is: ";
    for (int i=0; i<10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    bubble(arr,10);
    cout << "Array after sorting is: ";
    for (int i=0; i<10; i++)
    {
        cout << arr[i] << " ";
    }
}
