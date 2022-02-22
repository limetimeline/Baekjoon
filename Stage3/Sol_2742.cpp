#include <iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	for (int i = n; i >= 1; i--)
	{
		ios::sync_with_stdio(false);
		cout.tie(NULL);
		cout << i <<'\n';
	}
	return 0;
}