#include<iostream>
using namespace std;

int fact(int n)
    {
        if (n==0)
        {
            return 1;
        }
        else 
        {
            return n*fact(n-1);
        }
    }
    
int main(void)
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The Factorial of "<<n<<" is "<<fact(n);
}
