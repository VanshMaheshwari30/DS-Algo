#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if (n==1)
    {
        return false;
    }
    for (int i=2; i<n; i++)
    {
        if (n%i == 0)
        {
            return false;
        }
        else 
        {
            return true;
        }
    }
}

void PrimeFactors(int n)
{
    for (int i=2; i<=n; i++)
    {
        if (isPrime(i))
        {
            int x=i;
            while (n%x==0)
            {
                cout << i <<endl;
                x=x*i;
            }
        }
    }
}

int main(void)
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    PrimeFactors(n);
}
