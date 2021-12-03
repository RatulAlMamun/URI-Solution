#include<bits/stdc++.h>

using namespace std;

int main()
{
    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, X, Y, N;
    cin >> N;
    while(N--) {
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy >> X >> Y;
        if(X >= Ax && Y >= Ay && X <= Cx && Y <= Cy) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}