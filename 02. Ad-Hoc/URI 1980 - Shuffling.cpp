#include<bits/stdc++.h>

using namespace std;

long long factorial(long long n)
{
    if(n == 1) return 1;
    return n * factorial(n - 1);
}

int main()
{
    string str;
    while(cin >> str){
        if(str == "0") break;
        cout << factorial(str.length()) << endl;
    }
    return 0;
}