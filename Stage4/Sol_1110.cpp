#include <iostream>
using namespace std;


int main() {
	int n, cycle=1, a=0;
	cin >> n;
	a = n;

	if ((n != 0) && (n < 10))
	{
		n = n * 10 + n;
		cycle++;
	}

	while (true)
	{
		
		n = ((n % 10)*10) + ((n % 10) + n / 10)%10;
		if (a == n)
		{
			break;
		}
		cycle++;
	}
	cout << cycle;
	return 0;
}
