#include<iostream>
using namespace std;

int power(int x, int n)
{
    if (n==0)
    {
        return 1;
    }
    int temp = power(x,n/2);
    temp = temp*temp;
    if  (n%2==0)
    {
        return temp;
    }
    else 
    {
        return temp*x;
    }
}

int main(void)
{
    int x,n;
    cout << "Enter the number and its power: "<< endl;
    cin >> x >> n;
    cout << "The required number is: "<< power(x,n);
}
