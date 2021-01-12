#include <bits/stdc++.h> 
using namespace std; 

int longestCommonSum(bool arr1[], bool arr2[], int n) 
{ 
	int arr[n]; 
	for (int i=0; i<n; i++) 
	arr[i] = arr1[i] - arr2[i]; 
	
	unordered_map<int, int> hM; 

	int sum = 0;	 
	int max_len = 0; 

	for (int i = 0; i < n; i++) 
	{ 
		sum += arr[i]; 

		if (sum == 0) 
			max_len = i + 1; 

		if (hM.find(sum) != hM.end()) 
		max_len = max(max_len, i - hM[sum]); 
			
		else  
			hM[sum] = i; 
	} 

	return max_len; 
} 

int main(void) 
{ 
	bool arr1[] = {0, 1, 0, 1, 1, 1, 1}; 
	bool arr2[] = {1, 1, 1, 1, 1, 0, 1}; 
	int n = sizeof(arr1)/sizeof(arr1[0]); 
	cout << longestCommonSum(arr1, arr2, n); 
} 
