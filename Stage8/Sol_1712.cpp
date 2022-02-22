#include <iostream>

using namespace std;


int main() {
	unsigned long long  a, b, c;
	int d = 0;

	cin >> a >> b >> c;
	d = c - b;
	if (d <= 0)
	{
		cout << -1;
	}
	else {
		cout << (a / d+1);
	}


	return 0;
}
