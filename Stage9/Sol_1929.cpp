#include <iostream>
#include <math.h>

using namespace std;

int is_prime(int p)
{
    if (p == 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(p); i++)
    {
        if (p % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, m;

    cout.tie(NULL);
    cin >> n >> m;

    for (int i = n; i <= m; i++)
    {
        if (is_prime(i))
        {
            cout << i << '\n';
        }
    }

    return 0;
}
