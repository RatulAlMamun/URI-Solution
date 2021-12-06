#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    getchar();
    while(N--) {
        string s;
        getline(cin, s);
        bool arr[26] = {false};
        for(int i = 0; i < s.size(); i++)
            if(s[i] >= 'a' && s[i] <= 'z') arr[s[i] - 97] = true;
        int c = 0;
        for(int i = 0; i < 26; i++)
            if(arr[i]) c++;

        if(c == 26) cout << "frase completa" << endl;
        else if(c >= 13 && c < 26) cout << "frase quase completa" << endl;
        else cout << "frase mal elaborada" << endl;
    }
    return 0;
}