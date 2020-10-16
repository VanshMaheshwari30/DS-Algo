#include<iostream>
using namespace std;

void merge(int a[], int s1, int b[], int s2, int c[] )
{
    int i=0,j=s2-1,k=0;
    while (i<s1 && j>=0)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j--;
            k++;
        }
    }
    while (i<s1)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j>=0)
    {
        c[k]=b[j];
        j--;
        k++;
    }
}

int main(void)
{
    int x[10],y[10],z[20];
    cout << "Enter 10 elements of array in ascending order:\n";
    for (int i=0;i<10;i++)
    {
        cin >> x[i];
    }
    cout << "Enter 10 elements of array in descending order:\n";
    for (int i=0;i<10;i++)
    {
        cin >> y[i];
    }
    merge(x,10,y,10,z);
    cout << "The sorted array is: ";
    for (int i=0;i<20;i++)
    {
        cout << z[i] << " ";
    }
}
