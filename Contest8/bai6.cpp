#include <bits/stdc++.h>
using namespace std;
main(){
    long long t; cin>>t;
    while(t--){
        // 9 
        // 90 99
        // 99 900 909
        // 900 909
        queue<string> q; 
        q.push("9");
        long long n; cin>>n;
        while(true){
            long long res = 0;
            string s = q.front();
            for(int i = 0; i < s.length(); i++){
            	res = res *10 +s[i] -'0';
			}
            if(res%n==0) {cout<<res; break;}
            else{
                q.push(q.front()+'0');
                q.push(q.front()+'9');
                q.pop();
            }
        }
        cout<<endl;
    }
}
