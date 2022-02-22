#include <iostream>
using namespace std;


int main() {
	int a=1,b=1;
	

	while (true)
	{
		cin >> a >> b;
		if (cin.eof())
		{
			break;
		}
		cout << a + b << '\n';
	}
	return 0;
}