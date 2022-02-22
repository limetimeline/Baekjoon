#include <iostream>

using namespace std;


int main() {
	int n, a=1, ans=2;

	cin >> n;
	
	if (n == 1) {
		cout << 1;
	}
	else
	{
		while (true)
		{
			if (n <= 6 * a + 1) {
				cout << ans;
				break;
			}
			else {
				a += ans;
				ans += 1;
			}
		}
	}

	return 0;
}
