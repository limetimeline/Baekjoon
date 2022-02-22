#include <iostream>
using namespace std;

int main() {
	int input, mul = 1;
	int sum[10]={0};
	int r;


	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		mul *= input;
	}

	for (int i = 0; i < 10; i++)
	{
		if (mul == 0)
		{
			break;
		}
		r = mul % 10;
		mul = mul / 10;
		
		sum[r] += 1;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << sum[i] << '\n';
	}
	return 0;
}