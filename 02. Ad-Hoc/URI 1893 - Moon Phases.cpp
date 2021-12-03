#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(b <= 2) cout << "nova" << endl;
    else if(b >= 2 && b <= 96 && a <= b) cout << "crescente" << endl;
    else if(b >= 2 && b <= 96 && a > b) cout << "minguante" << endl;
    else cout << "cheia" << endl;
    return 0;
}