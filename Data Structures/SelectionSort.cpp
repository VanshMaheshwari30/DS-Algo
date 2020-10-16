#include<iostream>
using namespace std;

void selection (int a[],int s)
{
    int i=0,j,pos,small;
    while (i<s)
    {
        j=i+1;
        small=a[i];
        pos=i;
        while (j<s)
        {
            if (small>a[j])
            {
                small=a[j];
                pos=j;
            }
            j++;
        }
        int t = a[i];
        a[i] = a[pos];
        a[pos] = t;
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
    selection(arr,10);
    cout << "Array after sorting is: ";
    for (int i=0; i<10; i++)
    {
        cout << arr[i] << " ";
    }
}
