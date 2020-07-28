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
			if(infix[i] -'0' <= 9 && infix[i] - '0' >= 0) out += infix[i];//neu la toan hang
			else if(infix[i] == '(') stk.push(infix[i]);
			else if(infix[i] == ')'){
				while(stk.top() != '(' && stk.size()){
					out += stk.top();
					stk.pop();
				}
				stk.pop();//bo dau '('
			}
			else if(infix[i] == '+' || infix[i] == '-' ||infix[i] == '*' || infix[i]=='/' || infix[i] == '^'){//neu la toan tu
				if(out[out.size()-1] >= '0' && out[out.size()-1] <= '9') out+='#';
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
		stack <int> stk1;
		for(int i = 0; i < out.length(); i++){
			if(out[i] == '+' || out[i] == '-' || out[i] == '*' ||out[i] == '/'|| out[i] == '^'){
				int x1 = stk1.top(); stk1.pop();
				int x2 = stk1.top(); stk1.pop();
				int x = 0;
				if(out[i] == '+') x = x1 +x2;
				else if(out[i] == '-') x = x2-x1;
				else if(out[i] == '*') x = x1*x2;
				else if(out[i] == '/') x = x2/x1;
				stk1.push(x);
			}
			else{
				int tmp = 0;
				while(i < out.size() && out[i]>='0'&&out[i]<='9'){
					tmp = 10*tmp+(int)(out[i]-'0');
					i++;
				}
				if(out[i] != '#') i--;
				stk1.push(tmp);
			}
		}
		cout << stk1.top() << endl;
	}
}
