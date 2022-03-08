#include <iostream>

using namespace std;

int main()
{
    int x[3], y[3], x4 = 0, y4 = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];
    }

    if (x[0] == x[1])
    {
        x4 = x[2];
    }
    else if (x[1] == x[2])
    {
        x4 = x[0];
    }
    else
    {
        x4 = x[1];
    }

    if (y[0] == y[1])
    {
        y4 = y[2];
    }
    else if (y[1] == y[2])
    {
        y4 = y[0];
    }
    else
    {
        y4 = y[1];
    }

    cout << x4 << " " << y4;
    return 0;
}