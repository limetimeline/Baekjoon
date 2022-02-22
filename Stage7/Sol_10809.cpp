#include <iostream>
using namespace std;



int main() {
	char str[101];
	int v[26];
	cin >> str;

	for (int i = 0; i < 26; i++)
	{
		v[i] = -1;
	}

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (str[i] == 'a'+j && v[j] == -1)
			{
				v[j] = i;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}