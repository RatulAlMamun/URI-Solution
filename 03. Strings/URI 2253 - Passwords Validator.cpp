#include<bits/stdc++.h>

using namespace std;

bool password_checker(string s)
{
    bool length = false;
    bool punctuation = false;
    bool number = false;
    bool up = false;
    bool low = false;
    int len = s.length();
    if(len >= 6 && len <= 32) length = true;
    for(int i = 0; i < len; i++) {
        if(isupper(s[i])) up = true;
        if(islower(s[i])) low = true;
        if(isdigit(s[i])) number = true;
        if(!isupper(s[i]) && !islower(s[i]) && !isdigit(s[i])) punctuation = true;
    }
    if(length && up && low && !punctuation) return true;
    else return false;
}

int main()
{
    string s;
    while(getline(cin, s)) {
        if(password_checker(s)) cout << "Senha valida." << endl;
        else cout << "Senha invalida." << endl;
    }
    return 0;
}