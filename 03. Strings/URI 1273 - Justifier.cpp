#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    bool newline = false;
    while(cin >> N) {
        if(!N) return 0;
        if(newline) {
            cout << endl;
        }
        newline = true;
        string s[N];
        int len, m = 0;
        for(int i = 0; i < N; i++) {
            cin >> s[i];
            len = s[i].size();
            if(m < len) m = len;
        }
        for(int i = 0; i < N; i++) {
            cout << setw(m) << s[i] << endl;
        }
    }
    return 0;
}