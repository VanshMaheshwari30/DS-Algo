#include<iostream>
using namespace std;

int gcd (int a,int b)
{
    if (b == 0)
    {
        return a;
    }
    else 
    {
        return gcd(b,a%b);
    }
}

int lcm (int a, int b)
{
    return (a*b)/(gcd(a,b));
}

int main(void)
{
    int a,b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "The LCM of "<< a <<" & "<< b <<" is "<< lcm(a,b) <<"."; 
}
