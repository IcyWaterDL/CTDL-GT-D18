#include<bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> a[1001];
        int m, e, u, v;
        cin >> m >> e;
        for (int i = 1; i <= e; i++){
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for (int i = 1; i <= m; i++){
            sort(a[i].begin(), a[i].end());
        }
        for (int i = 1; i <= m; i++){
            cout << i << ": ";
            for (int j = 0; j < a[i].size(); j++){
                cout << a[i].at(j) << ' ';
            }
            cout << "\n";
        }
    }

}
