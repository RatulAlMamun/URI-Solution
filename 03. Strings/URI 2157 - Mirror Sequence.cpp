#include<bits/stdc++.h>

using namespace std;

int main()
{
    int C, B, E;
    cin >> C;
    while(C--) {
        cin >> B >> E;
        stringstream convert;
        string s;
        for(int i = B; i <= E; i++) {
            convert << i;
        }
        s = convert.str();
        cout << s;
        int len = s.length();
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}