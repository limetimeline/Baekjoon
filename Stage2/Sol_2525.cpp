#include <iostream>

using namespace std;


int main() {
	int h, m, need;

	cin >> h >> m >> need;

	m = m + need;

	while (m >= 60)
	{
		m -= 60;
		h += 1;
		if (h == 24)
		{
			h -= 24;
		}
	}
	
	cout << h << " " << m;
	return 0;
}
