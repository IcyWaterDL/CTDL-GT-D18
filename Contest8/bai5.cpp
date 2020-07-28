#include <bits/stdc++.h>
using namespace std;
main(){
    long long t; cin>>t;
    while(t--){
        queue<string> q; 
        q.push("1");
        long long n; cin>>n;
        for(long long i=1;i<=n;i++){
            cout<<q.front()<<" ";
            q.push(q.front()+'0');
            q.push(q.front()+'1');
            q.pop();
        }
        cout<<endl;
    }
}
