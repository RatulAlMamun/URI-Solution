#include<bits/stdc++.h>

using namespace std;

int main()
{
    int C, n, m;
    char ch;
    cin >> C;
    while(C--) {
        cin >> n >> ch >> m;
        if(n == m)
            for(int i = 5; i <= 10; i++)
                cout << n << " x " << i << " = " << n * i << endl;
        else
            for(int i = 5; i <=10; i++)
                cout << n << " x " << i << " = " << n * i << " && " << m << " x " << i << " = " << m * i << endl;
    }
    return 0;
}