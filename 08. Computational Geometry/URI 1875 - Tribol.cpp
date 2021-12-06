#include<iostream>

using namespace std;

int main()
{
    int C, P, R, G, B;
    char M, S;
    cin >> C;
    while(C--) {
        cin >> P;
        R = 0;
        B = 0;
        G = 0;
        while(P--) {
            cin >> M >> S;
            if(M == 'R') {
                if(S == 'G') R += 2;
                else R++;
            } else if(M == 'G') {
                if(S == 'B') G += 2;
                else G++;
            } else {
                if(S == 'R') B += 2;
                else B++;
            }
        }
        if(R == G && G == B) cout << "trempate" << endl;
        else if((R == G && R) || (G == B && G) || (B == R && B)) cout << "empate" << endl;
        else if(R > G && R > B) cout << "red" << endl;
        else if(G > R && G > B) cout << "green" << endl;
        else cout << "blue" << endl;
    }
    return 0;
}