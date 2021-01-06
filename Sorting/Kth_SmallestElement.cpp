#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h)
{   
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

int kthSmallest(int arr[],int n,int k){
    int l=0,r=n-1;
    while(l<=r){
        int p=partition(arr,l,r); //Lomuto Partitioning
        if(p==k-1)
            return p;
        else if(p>k-1)
            r=p-1;
        else
            l=p+1;
    }
    return -1;
}

int main() 
{
	int a[10],k;
    cout << "Enter 10 elements of array: " << endl;
    for (int i=0; i<10; i++)
        cin >> a[i];
    cout << "Enter which smallest element to be found: ";
    cin >> k;
    cout << "Original Array is: ";
    for (int i=0; i<10; i++)
        cout << a[i] << " ";
	int n=sizeof(a)/sizeof(a[0]);
    int index=kthSmallest(a,n,k);
	cout <<"\nKth smallest element is: "<< a[index] ;
}
