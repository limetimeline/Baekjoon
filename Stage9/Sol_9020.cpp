#include <iostream>
#include <math.h>

using namespace std;

int prime(int n)
{

    int temp = n;
    if (n == 0 || n == 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (temp % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int c, n, p_arr[10000] = {0}, idx = 0, r[10000][2] = {0};

    for (int i = 0; i < 10000; i++)
    {
        if (prime(i))
        {
            p_arr[idx++] = i;
        }
    }

    cin.tie(NULL);
    cout.tie(NULL);
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        int flag = 0;
        cin >> n;

        for (int j = 0; j < idx; j++)
        {
            if (p_arr[j] > n)
            {
                break;
            }
            for (int k = 0; k < idx; k++)
            {
                if (p_arr[k] > n)
                {
                    break;
                }
                if ((p_arr[j] + p_arr[k]) == n)
                {
                    if (flag == 0)
                    {
                        flag = 1;
                        r[i][0] = p_arr[j];
                        r[i][1] = p_arr[k];
                    }
                    else if ((flag == 1) && (abs(r[i][0] - r[i][1]) > abs(p_arr[j] - p_arr[k])))
                    {
                        r[i][0] = p_arr[j];
                        r[i][1] = p_arr[k];
                        continue;
                    }
                }
            }
        }
    }

    for (int i = 0; i < c; i++)
    {
        cout << r[i][0] << " " << r[i][1] << '\n';
    }
    return 0;
}