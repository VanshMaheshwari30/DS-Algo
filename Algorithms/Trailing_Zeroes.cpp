#include<iostream>
using namespace std;

int countzeroes(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i = i*5)
    {
        res = res + (n/i);
    }
    return res;
}
 int main(void)
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Trailing zeroes in "<< n <<" are "<< countzeroes(n) << ".";
}
