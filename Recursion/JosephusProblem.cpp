#include <iostream>
using namespace std;


int jos(int n, int k)
{
	if(n == 1)
		return 0;
	else
		return (jos(n - 1, k) + k) % n;
}

// If the index start from zero use myJos function else use jos function.

int myJos(int n, int k)
{
	return jos(n, k) + 1;
}
	
int main(void) 
{
	int n,k;
	cout << "Enter the size and value of k: ";
    cin >> n >> k;
	cout<< "The person that survived was: " << myJos(n, k);
}
