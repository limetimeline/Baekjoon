#include <iostream>
using namespace std;



int main() {
	int sum = 0;
	int check[100][26] = { 0 };
	char str[100][101] = { '\0' };
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
		int temp = 1;
		for (int j = 0; str[i][j] != '\0'; j++)
		{
			if ((check[i][str[i][j] - 'a']) == 0 && str[i][j+1] != str[i][j])
			{
				check[i][str[i][j] - 'a'] = 1;
			}
			else if((check[i][str[i][j] - 'a']) == 1) {
				temp = 0;
				break;
			}
		}
		sum += temp;
	}
	cout << sum;
	return 0;
}