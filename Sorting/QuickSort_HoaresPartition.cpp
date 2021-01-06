#include <bits/stdc++.h>
using namespace std;

int Hpartition(int arr[], int l, int h)
{   
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i],arr[j]);
    }
}

void qSort(int arr[],int l,int h){
    if(l<h){
        int p=Hpartition(arr,l,h);
        qSort(arr,l,p);
        qSort(arr,p+1,h);
    }
}
 
int main() {
	
    int a[10];
    cout << "Enter 10 elements of array: " << endl;
    for (int i=0; i<10; i++)
        cin >> a[i];
    cout << "Original Array is: ";
    for (int i=0; i<10; i++)
        cout << a[i] << " ";
	int n=sizeof(a)/sizeof(a[0]);
	cout <<"\n Array after sorting is: ";
	qSort(a,0,n-1);
	for(int x: a)
	    cout<<x<<" ";
}
