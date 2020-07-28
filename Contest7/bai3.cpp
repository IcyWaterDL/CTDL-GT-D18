#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin >> test;
	cin.ignore();
	while(test--){
		string s;
		getline(cin, s);
		stack <char> stk;
		for(int i = 0; i < s.size(); i++){
			while(s[i] != ' ' && i < s.size()){
				stk.push(s[i]);
				i++;
			}
			while(!stk.empty()){
				cout << stk.top();
				stk.pop();
			}
			if(s[i] == ' ') cout << s[i];
		}
		cout << "\n";
	}
}
