#include <iostream>
using namespace std;

char str[1000000];

int main() {
	int m = 0, flag = 0;
	cin.getline(str,1000000, '\n');

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && flag == 0)
		{
			flag = 1;
			m++;
		}
		else if (str[i] == ' ' && flag == 1)
		{
			flag = 0;
		}
	}
	
	cout << m;
	return 0;
}