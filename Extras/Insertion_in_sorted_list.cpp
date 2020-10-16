#include<iostream>
using namespace std;

int insertion_in_list(int a[],int n,int s)
{
    int pos=-1;
    if (a[0]>n)
    {
        pos=0;
    }
    else
    {
        int i=1;
        while (i<s)
        {
            if (a[i]>n)
            {
                pos=i;
                break;
            }
            i++;
        }
        if (pos==-1)
        {
            pos=s;
        }
    }
    return pos;    
}

int main(void)
{
    int x[10],s=5,i,p,ne;
    cout<< "Enter " << s << " elements in array in ascending order:\n";
    for (int i=0;i<s;i++)
    {
        cin>> x[i];
    }
    cout<< "Enter the new element to add: ";
    cin>>ne;
    p=insertion_in_list(x,ne,s);
    s++;
    i=s-1;
    while(i>p)
    {
        x[i]=x[i-1];
        i--;
    }
    x[p]=ne;
    cout<< "The new array is: ";
    for (int i=0;i<s;i++)
    {
        cout << x[i] <<" ";
    }
}
