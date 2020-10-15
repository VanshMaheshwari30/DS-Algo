#include<iostream>
using namespace std;

int lcm (int a, int b)
{
    int res = max(a,b);
    while (true)
    {
        if ((res%a == 0) && (res%b == 0))
        {
            return  res;
        }
        res++;
    }
    return res;
}

int main(void)
{
    int a,b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "The LCM of "<< a <<" & "<< b <<" is "<< lcm(a,b) <<"."; 
}
