#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if(a==b || b==c || c==a) cout << "Empate" << endl;
    else if(a < b && a < c) cout << "Otavio" << endl;
    else if(b < c && b < a) cout << "Bruno" << endl;
    else cout << "Ian" << endl;
    return 0;
}
