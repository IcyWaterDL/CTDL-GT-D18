#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin >> test;
	while(test--){
		string pre;
		cin >> pre;
		stack <int> stk;
		for(int i = pre.length(); i >= 0; i--){
			if(pre[i] == '+' || pre[i] == '-' || pre[i] == '*' ||pre[i] == '/'){
				int x1 = stk.top(); stk.pop();
				int x2 = stk.top(); stk.pop();
				int x = 0;
				if(pre[i] == '+') x = x1 +x2;
				else if(pre[i] == '-') x = x1-x2;
				else if(pre[i] == '*') x = x1*x2;
				else if(pre[i] == '/') x = x1/x2;
				stk.push(x);
			}
			else stk.push((int)(pre[i] - '0'));
		}
		cout << stk.top() << endl;
	}
}
