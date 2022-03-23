#include <iostream>
using namespace std;

unsigned long long hashing(char a, int i)
{
    int index = (a - 'a') + 1;

    return index;
}

int main()
{
    int n;
    unsigned long long sum = 0, temp = 0, cnt = 1;
    char c;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        temp = hashing(c, i) * cnt;
        temp = temp % 1234567891;
        sum += temp;
        cnt *= 31;
        cnt %= 1234567891;
        sum = sum % 1234567891;
    }

    cout << sum;
    return 0;
}