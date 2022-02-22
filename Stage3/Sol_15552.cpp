#include <iostream>
using namespace std;


int main() {
	int a, b, c;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin.tie(NULL);
		cin >> a >> b;
		cout << a + b << '\n';
	}
	return 0;
}