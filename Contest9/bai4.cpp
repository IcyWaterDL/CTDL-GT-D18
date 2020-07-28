#include<bits/stdc++.h>
using namespace std;

main() {
    int n;
    cin >> n;
    string s;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 0;
        }
    }
    getline(cin, s);
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        for( int j = 0; j < s.size(); j++) {
            if (s[j] != ' ') {
                a[i][s[j] - '0' - 1] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
