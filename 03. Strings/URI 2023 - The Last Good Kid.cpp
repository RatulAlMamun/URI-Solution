#include <bits/stdc++.h>

using namespace std;

string lowerString(string str) 
{
    int i, len = str.size();
    for(i = 0; i < len; i++) str[i] = tolower(str[i]);
    return str;
}

int main() 
{
    string line, result = "";
    while(getline(cin, line)){
        if(lowerString(result) < lowerString(line)) result = line;
    }
    cout << result << endl;
    return 0;
}