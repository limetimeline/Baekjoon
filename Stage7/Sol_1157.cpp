#include <iostream>
using namespace std;

char str[1000000];

//int sort(char* str) {
//	char temp;
//	int len = 0;
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		for (int j = i+1; str[j] != '\0'; j++)
//		{
//			if ((str[i] >= 'A') && (str[i] <= 'Z'))
//			{
//				str[i] += 'a' - 'A';
//			}
//			if (str[i] > str[j]) {
//				temp = str[i];
//				str[i] = str[j];
//				str[j] = temp;
//			}
//		}
//		len++;
//	}
//	return len;
//}

int main() {
	int count[26] = { 0 }, max = 0, index = 0, flag = 0;
	cin >> str;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((str[i]>= 'A') && (str[i] <= 'Z'))
		{
			str[i] += 'a'-'A';
		}
		count[str[i] - 'a'] += 1;
	}
	max = count[0];
	for (int i = 1; i < 26; i++)
	{
		if (max < count[i])
		{
			max = count[i];
			index = i;
		}
	}
	
	for (int i = index+1; i < 26; i++)
	{
		if (max == count[i])
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1)
	{
		cout << '?';
	}
	else
	{
		cout << char(index + 'A');
	}
	

	return 0;

}