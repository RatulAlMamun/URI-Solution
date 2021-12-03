#include<bits/stdc++.h>

using namespace std;

int checkpytho(int a, int b, int c)
{
    int m, n1, n2;
    if(a > b && a > c) {
        m = a;
        n1 = b;
        n2 = c;
    } else if(b > a && b > c) {
        m = b;
        n1 = a;
        n2 = c;
    } else {
        m = c;
        n1 = b;
        n2 = a;
    }
    if(m * m == n1 * n1 + n2 * n2) return 1;
    else return 0;
}

int gcd(int a, int b)
{
    if(!b) return a;
    else return gcd(b, a % b);
}

int main()
{
    int x, y, z;
    while(cin >> x >> y >> z) {
        if(gcd(gcd(x, y), z) == 1 && checkpytho(x, y, z))
            cout << "tripla pitagorica primitiva" << endl;
        else if(checkpytho(x, y, z))
            cout << "tripla pitagorica" << endl;
        else
            cout << "tripla" << endl;
    }
    return 0;
}