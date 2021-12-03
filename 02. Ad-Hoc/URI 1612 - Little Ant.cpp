#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while(T--) {
        cin >> N;
        if(N % 2) cout << N / 2 + 1 << endl;
        else cout << N / 2 << endl;
    }
    return 0;
}