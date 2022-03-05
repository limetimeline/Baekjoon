#include <iostream>
using namespace std;


int main() {
	int x, y, w, h;
	int diff[4] = { 0 };

	cin >> x >> y >> w >> h;

	diff[0] = w - x;
	diff[1] = h - y;
	diff[2] = x;
	diff[3] = y;
	
	int min = diff[0];

	for (int i = 1; i < 4; i++)
	{
		if (min > diff[i])
		{
			min = diff[i];
		}
	}

	cout << min;
	

	return 0;
}