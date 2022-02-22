#include <iostream>

using namespace std;


int main() {
	int n, score[100] = { 0 };
	char str[80];
	
	cin >> n;
	cin.ignore();
	
	
	for (int  i = 0; i < n; i++)
	{
		int m = 0;
		
		cin.getline(str, 80, '\n');
		for (int j = 0; str[j] != '\0'; j++)
		{
			if (str[j] == 'O')
			{
				m++;
				score[i] += m;
			}
			else if (str[j] == 'X')
			{
				m = 0;
				continue;
			}
			else if(str[j+1] == '\0')
			{
				m = 0;
				break;
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << score[i] << '\n';
	}

	return 0;
}
