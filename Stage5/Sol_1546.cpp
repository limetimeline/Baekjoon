#include <iostream>

using namespace std;


int main() {
	int n;
	double score[1000] = { 0 }, m = 0, sum=0;
	cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
		if (m < score[i])
		{
			m = score[i];
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		sum += score[i] / m * 100.0;
	}

	cout << sum/float(n);
	return 0;
}
