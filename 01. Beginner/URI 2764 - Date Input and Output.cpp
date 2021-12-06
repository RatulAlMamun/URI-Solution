#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s[3] << s[4] << "/" << s[0] << s[1] << "/" << s[6] << s[7] << endl;
    cout << s[6] << s[7] << "/" << s[3] << s[4] << "/" << s[0] << s[1] << endl;
    cout << s[0] << s[1] << "-" << s[3] << s[4] << "-" << s[6] << s[7] << endl;
    return 0;
}