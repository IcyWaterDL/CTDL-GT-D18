#include<bits/stdc++.h>
using namespace std;

main() {
    int n;
    cin >> n;
    int adj[1000][1000];
    vector<int> v[n];
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adj[i][j];
            if (adj[i][j] == 1) {
                v[i].push_back(j);
            }
        }
    }
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] + 1 << ' ';
        }
        cout << endl;
    }
}
