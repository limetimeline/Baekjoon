#include <iostream>
using namespace std;

int main() {
	int n,input, count=0, flag=0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == 1)
		{
			continue;
		}
		else {
			for (int j = 2; j < 1000; j++)
			{
				if (input == j)
				{
					continue;
				}
				else if (input % j == 0)
				{
					flag = 1;
					break;
				}
			}
			if (flag == 1)
			{
				flag = 0;
			}
			else {
				count++;
			}
		}
	}

	cout << count;

	return 0;
}