#include<iostream>
using namespace std;

bool isArm(int n)
{
    int rev = 0, temp = n;
    while (temp != 0)
    {
        int l = temp % 10;
        rev = rev + (l*l*l);
        temp = temp / 10;
    }
    return (rev == n);
}

int main(void)
{
    int n;
    cout << "Enter the number to be checked: ";
    cin >> n ;
    cout << isArm(n); // prints 1 if armstrong else prints 0
}
