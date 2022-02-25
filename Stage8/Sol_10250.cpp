#include <iostream>
using namespace std;


int main() {
	int arr[100];
	int n;
	int h, w, p;
	int f;
	cin >> n;
	

	for (int k = 0; k < n; k++)
	{
		cin >> h >> w >> p;
		int count = 0;
		for (int i = 1; i <= w; i++)
		{
			for (int j = 1; j <= h; j++)
			{
				count++;
				if (count == p)
				{
					arr[k] = j * 100 + i;
					break;
				}
			}
			if (count==p)
			{
				break;
			}
		}
	}
	

	/*for (int i = 0; i < n; i++)
	{
		cin >> h >> w >> p;
		f = (p % h)*100;
		f += (p / h) + 1;
		arr[i] = f;
	}*/
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\n';
	}
	return 0;
}