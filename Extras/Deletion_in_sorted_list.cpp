#include<iostream>
using namespace std;

int linear_search(int a[],int s,int n)
{
    for(int i=0; i<s; i++)
    {
        if (a[i]==n)
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int x[10],i,de,p,s=10;
    cout<<"Enter 10 elements of array in ascending order: \n";
    for(int i=0;i<s;i++)
    {
        cin>> x[i];
    }
    cout<<"Enter the element to be deleted: ";
    cin>> de;
    p=linear_search(x,s,de);
    if(p==-1)
    {
        cout<<"Element to be deleted not present.";
    }
    else
    {
        i=p;
        while (i<s-1)
        {
            x[i]=x[i+1];
            i++;
        }
        s--;
    }
    cout<< "The new array is: ";
    for (int i=0;i<s;i++)
    {
        cout << x[i] <<" ";
    }
}
