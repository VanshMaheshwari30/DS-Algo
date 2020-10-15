#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    while (a != b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else 
        {
            b=b-a;
        }
    }
    return a;
}
int main(void)
{
    int a,b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "The GCD of "<< a <<" & "<< b <<" is "<< gcd(a,b) << ".";  
}
