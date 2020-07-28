#include<bits/stdc++.h>
using namespace std;
string check(string s){
	stack <int> stk;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(') stk.push(i);
		else if(s[i] == ')'){
			if(stk.size() > 0){
				int top = stk.top(); stk.pop();
				if(top == 0) continue;
				else if(s[top-1] == '+') continue;
				else if(s[top-1] == '-'){
					for(int j = top; j <= i; j++){
						if(s[j] == '+') s[j] = '-';
						else if(s[j] == '-') s[j] = '+';
					}
				}
			}
		}
	}
	string r = "";
	for(int i = 0; i < s.size();i++){
		if(s[i] != '(' && s[i] != ')')
			r += s[i];
	}
	return r;
}
main(){
	int test;
	cin >> test;
	cin.ignore();
	while(test--){
		string p1, p2;
		getline(cin, p1);
		getline(cin, p2);
		if(check(p1) == check(p2)) cout << "YES\n";
		else cout << "NO\n";
	}
}
