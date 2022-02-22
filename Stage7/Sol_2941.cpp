#include <iostream>
using namespace std;

int main() {
    char alp[8][4] = {
        {'c', '='},
        {'c', '-'},
        {'d', 'z', '='},
        {'d','-'},
        {'l', 'j'},
        {'n', 'j'},
        {'s', '='},
        {'z', '='}
    };
    char str[101] = { '\0' };
    int sum = 0, len = 0, flag = 0;
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; j < 8; j++) {
            for (int k = 0; alp[j][k] != '\0'; k++) {
                if (str[i + k] != alp[j][k]) {
                    flag = 0;
                    break;
                }
                else {
                    len++;
                    flag = 1;
                }
            }
            if (flag == 1) {
                flag = 0;
                i += len-1;
                len = 0;
                break;
            }
            len = 0;
        }
        sum++;
    }
    cout << sum;
    return 0;
}