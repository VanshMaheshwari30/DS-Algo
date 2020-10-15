#include<iostream>
using namespace std;

void PrimeFactors(int n)
{
    if (n <= 1)
    {
        return;
    }
    for (int i=2; i*i <= n; i++)
    {
        while (n%i==0)
        {
            cout << i <<endl;
            n=n/i;
        }
    }
    if (n>1)
    {
        cout << n;
    }
}

int main(void)
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    PrimeFactors(n);
}
