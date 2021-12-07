#include<iostream>

using namespace std;

int main()
{
    int Chicken, Beef, Pasta;
    int A_Chicken, A_Beef, A_Pasta;
    int result = 0;

    cin >> A_Chicken >> A_Beef >> A_Pasta;
    cin >> Chicken >> Beef >> Pasta;

    if(A_Chicken < Chicken) result += Chicken - A_Chicken;
    if(A_Beef < Beef) result += Beef - A_Beef;
    if(A_Pasta < Pasta) result += Pasta - A_Pasta;

    cout << result << endl;

    return 0;
}