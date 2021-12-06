#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, x, y;
    cin >> N;
    int arr[N][N];
    bool mapp[1001];
    for(int i = 0; i < 1001; i++) mapp[i] = false;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> arr[i][j];
    for(int i = 0; i < 2*N; i++) {
        cin >> x >> y;
        mapp[arr[x - 1][y - 1]] = true;
    }
    int c = 0;
    for(int i = 0; i < 1001; i++)
        if(mapp[i]) c++;
    cout << c << endl;
    return 0;
}