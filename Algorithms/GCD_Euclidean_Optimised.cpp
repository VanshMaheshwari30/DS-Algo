#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main(void)
{
    int a,b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "The GCD of "<< a <<" & "<< b <<" is "<< gcd(a,b) << ".";  
}
