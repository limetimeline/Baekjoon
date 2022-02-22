#include <iostream>

using namespace std;
int result[10000] = { 0 };
void check(int n) {
	int len=0;
	int sum = n;
	for (int i = 10; i <= 10000; i*=10)
	{
		if (n/i==0)
		{
			len = i/10;
			break;
		}
	}

	for (int i = len; i >= 1; i/=10)
	{
		int a = 0;
		if (i==1)
		{
			a = n;
		}
		else
		{
			a = n / i; // 1
			n = n % i; // 0
		}
		sum += a;
	}
	result[sum] = 1;
}

void d() {
	for (int i = 0; i < 10000; i++)
	{
		check(i);
	}
}

int main() {
	d();
	
	for (int i = 0; i < 10000; i++)
	{
		if (result[i] == 0)
		{
			cout << i << '\n';
		}
	}
	return 0;
}
