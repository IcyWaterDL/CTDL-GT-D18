#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin >> test;
	while(test--){
		string pre;
		stack <string> stk;
		cin >> pre;
		for(int i = 0; i < pre.length(); i++){
			if(pre[i] == '+' || pre[i] == '-' || pre[i] == '*' ||pre[i] == '/'|| pre[i] == '^'){
				string op1 = stk.top(); stk.pop();
				string op2 = stk.top(); stk.pop();
				string temp = "("+ op2 + pre[i] + op1 +")";
				stk.push(temp);
			}
			else stk.push(string(1,pre[i]));
		}
		cout << stk.top()<<endl;
	}
}
