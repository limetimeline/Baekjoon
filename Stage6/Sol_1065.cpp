#include <iostream>

using namespace std;

int hansu(int n) {
	int hs[3] = { 0 };
	int count = 0;

	for (int i = 1; i <= n; i++)
	{
		if (i > 0 && i < 100)
		{
			count++;
		}
		else if (i == 1000)
		{
			break;
		}
		else
		{
			int a = i;
			for (int j = 0; j < 3; j++)
			{
				hs[j] = a % 10;
				a = a / 10;
			}

			if (hs[0] - hs[1] == hs[1] - hs[2])
			{
				count++;
			}
 		}
	}
	return count;
}

int main() {
	int n;
	cin >> n;

	cout << hansu(n);

	return 0;
}
