#include<iostream>
using namespace std;

bool isMagic(int n) 
{ 
    int sum = 0; 
    while (n > 0 || sum > 9) 
    { 
        if (n == 0) 
        { 
            n = sum; 
            sum = 0; 
        } 
        sum += n % 10; 
        n /= 10; 
    }  
    return (sum == 1); 
} 
   
int main(void)
{
    int n;
    cout << "Enter the number to be checked: ";
    cin >> n ;
    cout << isMagic(n); // prints 1 if Magic number else prints 0
}
