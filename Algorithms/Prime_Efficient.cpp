#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if (n==1)
    {
        return false;
    }
    for (int i=2; i*i <= n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        else 
        {
            return true;
        }
    }
}

int main(void)
{
    int n;
    cout << "Enter the number to be checked: ";
    cin >> n;
    cout << isPrime(n); // prints 1 if prime else 0
}
