#include <bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin >> test;
	cin.ignore();
	while(test--){
		string s;
		getline(cin, s);
		stack <char> stk;
		bool ok;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ')'){
				ok = true;
				char top = stk.top(); stk.pop();
				while(top != '('){
					if(top == '+'|| top == '-' ||top == '*'||top == '/'){
						ok = false;
					}
					top = stk.top(); stk.pop();
				}
				if(ok) break;
			}
			else stk.push(s[i]);
		}
		if(ok) cout << "Yes";
		else cout << "No";
		cout << "\n";
	}
}
