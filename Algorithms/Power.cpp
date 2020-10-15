#include<iostream>
using namespace std;

int power(int x, int n)
{
    int res=1;
    for (int i=0; i<n; i++)
    {
        res = res*x;
    }
    return res;
}

int main(void)
{
    int x,n;
    cout << "Enter the number and its power: "<< endl;
    cin >> x >> n;
    cout << "The required number is: "<< power(x,n);
}
