#include <iostream>
using namespace std;

int main()
{
    int a[3], max;

    while (true)
    {
        max = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];

            if (a[i] > max)
            {
                max = a[i];
            }
        }

        if (a[0] == 0 && a[1] == 0 && a[2] == 0)
        {
            break;
        }

        if (max == a[0] && (a[0] * a[0] == a[1] * a[1] + a[2] * a[2]))
        {
            cout << "right" << '\n';
        }
        else if (max == a[1] && (a[1] * a[1] == a[0] * a[0] + a[2] * a[2]))
        {
            cout << "right" << '\n';
        }
        else if (max == a[2] && (a[2] * a[2] == a[0] * a[0] + a[1] * a[1]))
        {
            cout << "right" << '\n';
        }
        else
        {
            cout << "wrong" << '\n';
        }
    }

    return 0;
}