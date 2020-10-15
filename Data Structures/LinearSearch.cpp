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
int arr[10],i,ans,n;
cout << "Enter 10 elements in array." << endl;
for (int i=0; i<10; i++)
{
    cin >> arr[i];
} 
cout << "Enter the element to be searched: ";
cin >> n;
ans = linear_search(arr,10,n);
if (ans==-1)
{
    cout << "not found";
}
else
{
    cout << "Found at "<< ans+1 <<" location.";
}
}
