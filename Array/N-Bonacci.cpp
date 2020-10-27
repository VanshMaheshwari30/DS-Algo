#include <bits/stdc++.h> 
using namespace std; 

int bonacciseries(long n, int m) 
{ 
    int a[m] = { 0 }; 
	a[n - 1] = 1; 
	a[n] = 1; 
    for (int i = n + 1; i < m; i++) 
		a[i] = 2 * a[i - 1] - a[i - n - 1];
    for (int i = 0; i < m; i++) 
		cout << a[i] << " "; 
} 

int main(void) 
{ 
	int N,M;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Enter the number of elements to be printed: ";
    cin >> M; 
	bonacciseries(N, M);  
}
