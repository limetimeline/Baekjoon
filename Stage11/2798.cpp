#include <iostream>

using namespace std;


int main() {
	int n, m, sum = 0 , result = 0;
	int arr[100] = { 0 };

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n-2; i++)
	{
		for (int j = i+1; j < n-1; j++)
		{
			for (int k = j+1; k < n; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
			
				if (!(sum > m))
				{
					if (result < sum)
					{
						result = sum;
					}
				}
			}
		}
	}

	cout << result;
	return 0;
}