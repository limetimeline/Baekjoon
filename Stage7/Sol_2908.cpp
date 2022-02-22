#include <iostream>
using namespace std;



int main() {
	int a[2];

	for (int i = 0; i < 2; i++)
	{
		cin >> a[i];
		a[i] = (a[i] / 100) + ((a[i] % 100)/10)*10 + (a[i] % 10)*100;
	}

	if (a[0] > a[1])
	{
		cout << a[0];
	}
	else
	{
		cout << a[1];
	}

	return 0;
}