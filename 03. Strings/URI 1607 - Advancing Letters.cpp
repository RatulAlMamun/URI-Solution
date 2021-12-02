#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string A, B;
    int T, i, op;
    cin >> T;
    while(T--) {
        op = 0;
        cin >> A >> B;
        for(i = 0; i < A.size(); i++) {
            if(A[i] < B[i]) op += B[i] - A[i];
            if(A[i] > B[i]) op += 26 - A[i] + B[i];
        }
        cout << op << endl;
    }
    return 0;
}