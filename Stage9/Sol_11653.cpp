#include <iostream>
#include <math.h>

using namespace std;

void prime_div(int n)
{
    int temp = n;
    int i = 2;
    while (true)
    {
        if (temp % i == 0)
        {
            temp /= i;
            cout << i << '\n';
        }
        else
        {
            i++;
        }

        if (temp == 1)
        {
            break;
        }
    }
}

int main()
{
    int n;

    cin >> n;

    prime_div(n);

    return 0;
}
