#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    int res=min(a,b);
    while(res > 0)
    {
        if (a%res==0 && b%res==0)
        {
            break;
        }
        res--;
    }
    return res;
}
int main(void)
{
    int a,b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "The GCD of "<< a <<" & "<< b <<" is "<< gcd(a,b) << ".";  
}
