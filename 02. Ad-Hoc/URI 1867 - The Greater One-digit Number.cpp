#include<bits/stdc++.h>

using namespace std;

long long int digitsum(long long int n)
{
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    if(sum < 10) return sum;
    else digitsum(sum);
}


int main()
{
    string M, N;
    while(cin >> M >> N) {
        if(M == "0" && N == "0") break;
        int m = 0, n = 0;
        for(int i = 0; i < M.size(); i++) m += M[i] - '0';
        for(int i = 0; i < N.size(); i++) n += N[i] - '0';
        if(digitsum(m) > digitsum(n)) cout << "1" << endl;
        else if(digitsum(m) < digitsum(n)) cout << "2" << endl;
        else cout << "0" << endl;
    }
    return 0;
}