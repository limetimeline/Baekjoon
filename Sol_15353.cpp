#include <iostream>
using namespace std;

void reverse(char *str, char *re, int count)
{

    for (int i = count - 1; i >= 0; i--)
    {
        re[count - 1 - i] = str[i];
    }
}

int main()
{
    char str[2][10001] = {'\0'}, input;
    char re[2][10001] = {'\0'};
    int count[2], maxLen, carry = 0;
    int result[10001] = {0};

    for (int i = 0; i < 2; i++)
    {
        int j = 0;
        while (true)
        {
            input = getchar();
            if (input == ' ' || input == '\n')
            {
                count[i] = j;
                break;
            }
            str[i][j] = input;
            j++;
        }
        reverse(str[i], re[i], count[i]);
    }

    if (count[0] > count[1])
    {
        maxLen = count[0];
        for (int i = 0; i < maxLen - count[1]; i++)
        {
            re[1][count[1] + i] = '0';
        }
    }
    else if (count[1] > count[0])
    {
        maxLen = count[1];
        for (int i = 0; i < maxLen - count[0]; i++)
        {
            re[0][count[0] + i] = '0';
        }
    }
    else
    {
        maxLen = count[0];
    }

    for (int i = 0; i < maxLen; i++)
    {
        if (int(re[0][i]) - 48 + int(re[1][i]) - 48 + carry > 9)
        {
            result[i] = (int(re[0][i]) - 48 + int(re[1][i]) - 48 + carry) % 10;
            carry = 1;
        }
        else
        {
            result[i] = (int(re[0][i]) - 48 + int(re[1][i]) - 48 + carry);
            carry = 0;
        }
        if ((i == maxLen - 1) && carry == 1)
        {
            result[i + 1] = 1;
            maxLen++;
            break;
        }
    }

    for (int i = maxLen - 1; i >= 0; i--)
    {
        cout << result[i];
    }

    return 0;
}