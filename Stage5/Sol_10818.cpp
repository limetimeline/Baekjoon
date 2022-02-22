#include <iostream>

using namespace std;
int arr[1000000] = { 0 };

int main() {
	int n, flag=1, min, max;
	
	cin >> n;
	cin.tie(NULL);
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (flag == 1)
		{
			min = arr[0];
			max = arr[0];
			flag = 0;
		}

		if (min > arr[i])
		{
			min = arr[i];
		}
		else if (max < arr[i])
		{
			max = arr[i];
		}
	}

	cout << min << " " << max;



	return 0;
}
