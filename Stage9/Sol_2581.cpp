#include <iostream>
using namespace std;

int is_prime(int n) {
	if (n == 1)
	{
		return 0;
	}
	else {
		for (int i = 2; i < n; i++)
		{
			if (n%i==0)
			{
				return 0;
			}
		}
		return 1;
	}
}

int main() {
	int m, n, sum=0, min=0;

	cin >>  n >> m;

	for (int i = n; i <= m; i++)
	{
		if (sum == 0 && is_prime(i))
		{
			sum += i;
			min = i;
		}
		else if(is_prime(i)) {
			sum += i;
		}
		else {
			continue;
		}
	}

	if (sum == 0)
	{
		cout << -1;
	}
	else {
		cout << sum << '\n' << min;
	}
	

	return 0;
}