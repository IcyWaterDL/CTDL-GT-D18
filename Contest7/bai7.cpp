#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin >> test;
	while(test--){
		string s;
		cin >> s;
		stack <char> stk;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '(' || s[i] == ')' && stk.size() == 0) stk.push(s[i]);
			else if(s[i] == ')'){
				if(stk.size() > 0 && stk.top() == '(') stk.pop();
				else stk.push(s[i]);
			}
		}
		while(!stk.empty()){
			cout << stk.top() << ' ';
			stk.pop();
		}
		int mo = 0, dong = 0;
		while(!stk.empty()){
			if(stk.top() == '(') mo++;
			else dong++;
			stk.pop();
		}
		int dem = mo/2+dong/2+mo%2+dong%2;
		cout << dem << endl;
	}
}
