#include <iostream>

using namespace std;


int main() {
	int arr[9];
	int max, idx = 1;


	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}

	max = arr[0];

	for (int i = 0; i < 9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			idx = i+1;
		}
	}

	cout << max << '\n' << idx;
	return 0;
}
