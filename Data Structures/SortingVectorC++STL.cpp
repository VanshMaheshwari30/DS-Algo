#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> v={10,20,5,7};
    sort(v.begin(),v.end());
    cout << "\nThe sorted array is: ";
    for (int x: v)
        cout << x << " ";
    sort(v.begin(),v.end(),greater<int>());
    cout << "\nThe reverse sorted array is: ";
    for (int x: v)
        cout << x << " ";
}
