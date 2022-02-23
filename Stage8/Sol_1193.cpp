#include <iostream>
using namespace std;


int main() {
	int x = 1, y = 1, n, flag=0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		if (x==1 && y==1)
		{
			if (i==1)
			{
				y++;
			}
			continue;
		}
		if (x==1 || y == 1)
		{
			if (x==1)
			{
				if ((x + y) % 2 == 0)
				{
					y++;
					flag = 0;
				}
				else {
					x++;
					y--;
					flag = 1;
				}
				continue;
			}
			
			if (y==1)
			{
				if ((x + y) % 2 == 0)
				{
					x--;
					y++;
					flag = 2;
				}
				else {
					x++;
					flag = 3;
				}
				continue;
			}
		}
		else {
			if (flag == 0)
			{
				y++;
			}
			else if (flag == 1)
			{
				x++;
				y--;
			}
			else if (flag == 2) {
				x--;
				y++;
			}
			else {
				x++;
				y--;
			}
		}
	}
	
	cout << x << "/" << y;

	return 0;
}