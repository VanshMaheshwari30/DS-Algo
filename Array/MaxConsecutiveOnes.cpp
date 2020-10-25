#include<iostream>
using namespace std;

int maxConsecutiveOnes(int arr[], int n)
{
	int res = 0, curr = 0;
    for(int i = 0; i < n; i++)
	{
		if(arr[i] == 0)
			curr = 0;
		else
		{
			curr++;
            res = max(res, curr);
		}
	}
	return res;
}

int main(void)
{
    int n,d;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: \n";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << "The original array is: \n";
    for (int i=0; i<n; i++)
        cout << arr[i] <<" ";
    cout<< "\nThe maximum number of consecutive 1s in the binary array are: " << maxConsecutiveOnes(arr,n);
}
