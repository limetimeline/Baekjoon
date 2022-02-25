#include <iostream>
using namespace std;


int main() {
	int t, k,n;
	int r[1000];
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> k;
		cin >> n;
		int arr[1000][1000] = { 0 };
		for (int i = 0; i <= k; i++)
		{
			for (int j= 0; j < n; j++)
			{
				if (i==0)
				{
					arr[i][j] = j + 1;
				}
				else {
					for (int l = 0; l <= j; l++)
					{
						arr[i][j] += arr[i - 1][l];
					}
				}
			}
		}
		r[i] =  arr[k][n - 1];
	}

	for (int i = 0; i < t; i++)
	{
		cout << r[i] << '\n';
	}
	
	return 0;
}