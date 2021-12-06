#include <bits/stdc++.h>

using namespace std;

int main () 
{
    string s;
    while(cin >> s) {
        int i, j, len, counter, flag;
        len = s.size();
        for(i = 0; i < len; i++) {
            flag = 0;
            for(j = 0; j < len * 2 - i - 1; j++) {
                if(i == j) {
                    counter = 0;
                    flag = 1;
                }
                if((i + j) % 2 || j < i) {
                    cout << " ";
                } else {
                    cout << s[counter];
                    counter++;
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}