#include <iostream>
using namespace std;

char result[1000][161];

int main() {
	int n, r;
	char str[21];

	cin >> n;
	

	for (int i = 0; i <n ; i++)
	{
		cin >> r >> str;
		for (int j = 0; str[j] != '\0'; j++)
		{
			for (int k = 0; k < r; k++)
			{
				result[i][j * r + k] = str[j];
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; result[i][j] != '\0'; j++)
		{
			cout << result[i][j];
		}
		cout << '\n';
	}

	return 0;

}