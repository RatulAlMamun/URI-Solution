#include<iostream>

using namespace std;

int main()
{
    int n;
    string m;
    while(cin >> n >> m) {
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += m[i] - 48;
        }
        if(!(sum %3)) cout << sum << " sim" << endl;
        else cout << sum << " nao" << endl;
    }
    return 0;
}