#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1) {
        int n;
        double m;
        cin >> n >> m;
        if(n == 0) {
            return 0;
        }
        long long int sum = 0;
        bool t = false;
        double arr[n + 1];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum == m) {
            cout << ":D" << endl;
            t = true;
        }
        if(sum < m) {
            cout << "-.-" << endl;
            t = true;
        }
        if(!t) {
            sort(arr, arr + n, greater<double>());
            double x=arr[0];
            while(1) {
                int c = 0, j = 0;
                for(int i = 0; i < n; i++) {
                    if(arr[i] == arr[0]) {
                        c++;
                    } else {
                        j = i;
                        break;
                    }
                }
                if(j == 0) {
                    j = n;
                }
                if(c < m) {
                    m -= c;
                    for(int i = 0; i < j; i++) {
                        arr[i] -= 1;
                    }
                } else {
                    for(int i = 0; i < j; i++) {
                        arr[i]-=(m/(double)c);
                    }
                    break;
                }
            }
            cout << fixed << setprecision(4) << arr[0] << endl;
        }
    }
    return 0;
}