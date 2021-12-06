#include<bits/stdc++.h>

using namespace std;

int main()
{
    long double X, L, I;
    while(1) {
        cin >> L;
        if(!L) break;
        I = ((L - 3.0) * 2.0) + 3.0;
        X = (I - L) / L;
        cout << fixed << setprecision(6) << X << endl;
    }
    return 0;
}