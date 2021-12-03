#include <bits/stdc++.h>

using namespace std;

unsigned long long numDigits(unsigned long long n)
{
    unsigned long long digit = 0;
    while(n) {
        n /= 10;
        digit++;
    }
    return digit;
}

int main () 
{
    unsigned long long N, i, j, k, M;
    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> M;
        unsigned long long matrix[M][M], temp;
        unsigned long long width[M];
        for(j = 0; j < M; j++) width[j] = 0;
        for(j = 0; j < M; j++) {
            for(k = 0; k < M; k++) {
                cin >> matrix[j][k];
                temp = numDigits(matrix[j][k] * matrix[j][k]);
                if(width[k] < temp) width[k] = temp;
            }
        }
        cout << "Quadrado da matriz #" << i + 4 << ":\n";
        for(j = 0; j < M; j++) {
            for(k = 0; k < M; k++) {
                cout << setw(width[k]) << matrix[j][k] * matrix[j][k];
                if(k == M - 1) printf("\n");
                else printf(" ");
            }
        }
        if(i < N - 1) printf("\n");
    }
  return 0;
}