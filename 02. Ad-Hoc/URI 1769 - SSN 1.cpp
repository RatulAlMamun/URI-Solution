#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, b1, b2, P, Q;
    string str;
    while(cin >> str) {
        a1 = str[0] - 48;
        a2 = str[1] - 48;
        a3 = str[2] - 48;
        a4 = str[4] - 48;
        a5 = str[5] - 48;
        a6 = str[6] - 48;
        a7 = str[8] - 48;
        a8 = str[9] - 48;
        a9 = str[10] - 48;
        b1 = str[12] - 48;
        b2 = str[13] - 48;
        P = a1 + a2 * 2 + a3 * 3 + a4 * 4 + a5 * 5 + a6 * 6 + a7 * 7 + a8 * 8 + a9 * 9;
        Q = a1 * 9 + a2 * 8 + a3 * 7 + a4 * 6 + a5 * 5 + a6 * 4 + a7 * 3 + a8 * 2 + a9;
        if((P % 11 == 10 && !b1) || (P % 11 == b1)) {
            if((Q % 11 == 10 && !b2) || (Q % 11 == b2)) {
                cout << "CPF valido" << endl;
            } else {
                cout << "CPF invalido" << endl;
            }
        } else {
            cout << "CPF invalido" << endl;
        }
    }
    return 0;
}