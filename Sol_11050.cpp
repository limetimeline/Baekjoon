#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int n, k;

    cin >> n >> k;

    if (k <= n && 0 <= k)
    {
        cout << fact(n) / (fact(k) * fact(n - k));
    }
    else
    {
        cout << 0;
    }

    return 0;
}