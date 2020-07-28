#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin >> test;
	while(test--){
		string post;
		cin >> post;
		stack <int> stk;
		for(int i = 0; i < post.length(); i++){
			if(post[i] == '+' || post[i] == '-' || post[i] == '*' ||post[i] == '/'|| post[i] == '^'){
				int x1 = stk.top(); stk.pop();
				int x2 = stk.top(); stk.pop();
				int x = 0;
				if(post[i] == '+') x = x1 +x2;
				else if(post[i] == '-') x = x2-x1;
				else if(post[i] == '*') x = x1*x2;
				else if(post[i] == '/') x = x2/x1;
				stk.push(x);
			}
			else stk.push((int)(post[i] - '0'));
		}
		cout << stk.top() << endl;
	}
}
