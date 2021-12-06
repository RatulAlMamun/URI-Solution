#include<bits/stdc++.h>

using namespace std;

int main()
{
    int C, N;
    cin >> C;
    while(C--) {
        cin >> N;
        double arr[N];
        for(int i = 0; i < N; i++)
            cin >> arr[i];
        int sum = accumulate(arr, arr + N, 0);
        double average = (double)sum / (double)N;
        int cnt = 0;
        for(int i = 0; i < N; i++)
            if(average < arr[i]) cnt++;
        cout << fixed << setprecision(3) << (double(cnt) * 100.0) / double(N) << "%" << endl;
    }
    return 0;
}