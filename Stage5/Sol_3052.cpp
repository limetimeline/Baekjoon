#include <iostream>
using namespace std;

void sort(int* arr) {
	int temp = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main() {
	int arr[10], index = 0, p = 0, c = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		arr[i] %= 42;
	}

	sort(arr);

	p = arr[0];
	for (int i = 1; i < 10; i++)
	{
		if (p != arr[i])
		{
			c++;
			p = arr[i];
		}
		else
		{
			p = arr[i];
		}
	}
	
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << arr[i] << '\n';
	//}
	cout << c+1;


	return 0;
}