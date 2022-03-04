#include <iostream>
#include <math.h>

using namespace std;

int temp[1000000] = {0};

int main()
{
    int n[123456] = {0}, a[123456] = {0};
    int i = 0;

    while (true)
    {

        cin >> n[i];

        if (n[i] == 0)
        {
            break;
        }

        for (int j = 2; j <= n[i] * 2; j++)
        {
            temp[j] = j;
        }

        for (int j = 2; j <= n[i] * 2; j++)
        {
            if (temp[j] == 0)
            {
                continue;
            }
            for (int k = 2 * j; k <= n[i] * 2; k += j)
            {
                temp[k] = 0;
            }
        }

        for (int j = 2; j <= n[i] * 2; j++)
        {
            if (temp[j] != 0 && j > n[i])
            {
                a[i]++;
            }
        }

        i++;
    }

    for (int j = 0; j < i; j++)
    {
        cout << a[j] << '\n';
    }

    return 0;
}