#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cin >> c;
    while(c--) {
        string s1, s2;
        cin >> s1 >> s2;
        if(s1 == s2) cout << "empate" << endl;
        else if(s1 == "tesoura" && s2 == "papel") cout << "rajesh" << endl;
        else if(s1 == "tesoura" && s2 == "pedra") cout << "sheldon" << endl;
        else if(s1 == "tesoura" && s2 == "lagarto") cout << "rajesh" << endl;
        else if(s1 == "tesoura" && s2 == "spock") cout << "sheldon" << endl;
        else if(s1 == "papel" && s2 == "pedra") cout << "rajesh" << endl;
        else if(s1 == "papel" && s2 == "lagarto") cout << "sheldon" << endl;
        else if(s1 == "papel" && s2 == "spock") cout << "rajesh" << endl;
        else if(s1 == "lagarto" && s2 == "spock") cout << "rajesh" << endl;
        else if(s2 == "tesoura" && s1 == "papel") cout << "sheldon" << endl;
        else if(s2 == "tesoura" && s1 == "pedra") cout << "rajesh" << endl;
        else if(s2 == "tesoura" && s1 == "lagarto") cout << "sheldon" << endl;
        else if(s2 == "tesoura" && s1 == "spock") cout << "rajesh" << endl;
        else if(s2 == "papel" && s1 == "pedra") cout << "sheldon" << endl;
        else if(s2 == "papel" && s1 == "lagarto") cout << "rajesh" << endl;
        else if(s2 == "papel" && s1 == "spock") cout << "sheldon" << endl;
        else if(s2 == "lagarto" && s1 == "spock") cout << "sheldon" << endl;
    }
    return 0;
}