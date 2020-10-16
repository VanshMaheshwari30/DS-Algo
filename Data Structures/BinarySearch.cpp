#include<iostream>
using namespace std;

int binary_search(int a[],int s,int n)
{
    int mid,beg=0,end=s-1;
    while (beg <= end)
    {
        mid=(int)((beg+end)/2);
        if (a[mid]==n)
        {
            return mid;
        }
        else if (a[mid]>n)
        {
            end = mid-1;
        }
        else
        {
            beg=mid+1;
        }
    }
    return -1;
}

int main(void)
{
int arr[10],i,ans,n;
cout << "Enter 10 elements in array." << endl;
for (int i=0; i<10; i++)
{
    cin >> arr[i];
} 
cout << "Enter the element to be searched: ";
cin >> n;
ans = binary_search(arr,10,n);
if (ans==-1)
{
    cout << "not found";
}
else
{
    cout << "Found at "<< ans+1 <<" location.";
}
}
