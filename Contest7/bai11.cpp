#include<bits/stdc++.h>
using namespace std;
int prec(char c){
	if(c == '(') return 0;
	if(c == '+' || c == '-') return 1;
	if(c == '*' || c == '/' || c == '%') return 2;
	else return 3;
}
main(){
	int test;
	cin >> test;
	cin.ignore();
	while(test--){
		string infix, out;
		stack <char> stk;
		getline(cin, infix);
		for(int i = 0; i < infix.length(); i++){
			if(isalpha(infix[i])) out += infix[i];//neu la toan hang
			else if(infix[i] == '(') stk.push(infix[i]);
			else if(infix[i] == ')'){
				while(stk.top() != '(' && stk.size()){
					out += stk.top();
					stk.pop();
				}
				stk.pop();//bo dau '('
			}
			else if(infix[i] == '+' || infix[i] == '-' ||infix[i] == '*' || infix[i]=='/' || infix[i] == '^'){//neu la toan tu
				while(stk.size()&&prec(infix[i])<=prec(stk.top())){
					out += stk.top();
					stk.pop();
				}
				stk.push(infix[i]);
			}
		}
		while(!stk.empty()){
			if(stk.top() != '(')out+=stk.top();
			stk.pop();
		}
		cout << out <<endl;
	}
}
