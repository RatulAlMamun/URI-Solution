#include<bits/stdc++.h>

using namespace std;

int main()
{
    string D, S;
    while(cin >> D >> S) {
        int pos = D.find(S);
        if(pos == -1) {
            cout << "Nao resistente" << endl;
        } else {
            cout << "Resistente" << endl;
        }
    }
    return 0;
}