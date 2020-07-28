#include<bits/stdc++.h>
using namespace std;
main(){
	int q;
	cin >> q;
	string s; int n; stack <int> stk;
	while(q-- && cin >> s){
		if(s == "PUSH"){
			cin >> n;
			stk.push(n);
		}
		else if(s == "POP" && !stk.empty()){
			stk.pop();
		}
		else if(s == "PRINT"){
			if(stk.empty()){
				cout << "NONE\n";
				continue;
			}
			else cout << stk.top() << "\n";
		}
	}
}
