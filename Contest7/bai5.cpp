#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin >> test;
	while(test--){
		string s;
		cin >> s;
		stack <int> stk;
		stk.push(-1);
		int Max = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '('){
				stk.push(i);
			}
			else{
				stk.pop();
				if(stk.size() > 0){
					Max = max(Max, i-stk.top());
				}
				if(stk.size() == 0){
					stk.push(i);
				}
			}
		}
		cout << Max <<"\n";
	}
}
