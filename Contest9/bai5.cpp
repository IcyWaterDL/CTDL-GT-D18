#include<bits/stdc++.h>
using namespace std;

main() {
    int t;
    cin >> t;
    while(t--) {
        int m, n, u, v;
        cin >> m >> n;
        vector<int> arr[m+1];
        for (int i = 1; i <= n; i++) {
            cin >> u >> v;
            arr[u].push_back(v);
        }
        for (int i = 1; i <= m; i++) {
            sort(arr[i].begin(), arr[i].end());
            cout << i << ": ";
            for(int j = 0; j < arr[i].size(); j++){
                cout << arr[i].at(j) << ' ';
            }
            cout << endl;
        }
    }
}
