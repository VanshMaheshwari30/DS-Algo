#include <stdio.h> 
using namespace std;

bool isSubsetSum(int set[], int n, int sum) 
{ 
    if (n == 0)
        return (sum == 0)? 1:0;
  
    if (set[n - 1] > sum) 
        return isSubsetSum(set, n - 1, sum); 
  
    return isSubsetSum(set, n - 1, sum) 
           || isSubsetSum(set, n - 1, sum - set[n - 1]); 
} 
   
int main(void) 
{ 
    int set[] = { 3, 34, 4, 12, 5, 2 }; 
    int sum = 9; 
    int n = sizeof(set) / sizeof(set[0]); 
    if (isSubsetSum(set, n, sum) == true) 
        printf("Found a subset with given sum."); 
    else
        printf("No subset with given sum.");  
} 
