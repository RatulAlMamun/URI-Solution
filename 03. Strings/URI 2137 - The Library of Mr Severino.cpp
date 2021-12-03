#include<bits/stdc++.h>

using namespace std;

int digit(int n)
{
    int count = 0;
    while(n) {
        n /= 10;
        count++;
    }
    return count;
}

int main()
{
    int n, p;
    while(cin >> n) {
        vector < int > v;
        while(n--) {
            cin >> p;
            v.push_back(p);
        }
        sort(v.begin(), v.end());
        for(int j = 0; j < v.size(); j++) {
            for(int i = 0; i < 4 - digit(v[j]); i++) {
                cout << "0";
            }
            if(v[j]) cout << v[j] << endl;
            else cout << endl;
        }
    }
    return 0;
}