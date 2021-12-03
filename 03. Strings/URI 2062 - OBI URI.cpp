#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int p = n;
    string s;
    vector < string > vs;
    while(n--) {
        cin >> s;
        vs.push_back(s);
    }
    for(i = 0; i < p; i++) {
        if(vs[i][0] == 'U' && vs[i][1] == 'R' && vs[i].size() == 3) vs[i][2] = 'I';
        if(vs[i][0] == 'O' && vs[i][1] == 'B' && vs[i].size() == 3) vs[i][2] = 'I';
    }
    for(i = 0; i < p; i++) {
        cout << vs[i];
        if(i == p - 1) cout << endl;
        else cout << " ";
    }
    return 0;
}