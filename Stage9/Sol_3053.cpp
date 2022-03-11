#include <iostream>
using namespace std;
#define PI 3.14159265358979323846264338327

int main()
{
    double r;

    cin >> r;

    cout << fixed;
    cout.precision(6);
    cout << r * r * PI << '\n';
    cout << 2 * r * r;
    return 0;
}