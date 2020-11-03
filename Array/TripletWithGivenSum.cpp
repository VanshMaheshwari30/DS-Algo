#include <bits/stdc++.h> 
using namespace std; 

bool find3Numbers(int A[], int arr_size, int sum) 
{ 
	int l, r; 
    sort(A, A + arr_size); 
    for (int i = 0; i < arr_size - 2; i++) { 
        l = i + 1;
        r = arr_size - 1;
        while (l < r) { 
			if (A[i] + A[l] + A[r] == sum) { 
				printf("Triplet is %d, %d, %d", A[i], 
					A[l], A[r]); 
				return true; 
			} 
			else if (A[i] + A[l] + A[r] < sum) 
				l++; 
			else  
				r--; 
		} 
	} 
    return false; 
}

int main(void)
{
    int n,x;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the sum: ";
    cin >> x;
    int arr[n];
    cout << "Enter the elements of array: \n";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The array is: ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    find3Numbers(arr,n,x); 
}
