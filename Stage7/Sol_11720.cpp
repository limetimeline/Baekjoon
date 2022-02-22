#include <iostream>
using namespace std;



int main() {
	int n, sum=0;
	char input[100];
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
		sum += input[i] - '0';
	}

	cout << sum;
	return 0;
}