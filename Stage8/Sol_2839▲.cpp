#include <iostream>
using namespace std;


int main() {
	int n, r;

	cin >> n;

	


	if (n==4 || n==7)
	{
		cout << -1;
	}
	else{
		cout << n - 2 * n / 5 * 2;
	}
	

	return 0;
}