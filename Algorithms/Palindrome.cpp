#include<iostream>
using namespace std;

bool isPal(int n)
{
    int rev = 0, temp = n;
    while (temp != 0)
    {
        int l = temp % 10;
        rev = rev * 10 + l;
        temp = temp / 10;
    }
    return (rev == n);
}

int main(void)
{
    int n;
    cout << "Enter the number to be checked: ";
    cin >> n ;
    cout << isPal(n); // prints 1 if palindrome else prints 0
}
