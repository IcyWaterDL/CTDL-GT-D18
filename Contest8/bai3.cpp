#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	deque <int> deq;
	while(t--){
		string s;
		cin >> s;
		if(s == "PUSHFRONT"){
			int x;
			cin >> x;
			deq.push_front(x);
		}
		else if(s == "PRINTFRONT"){
			if(!deq.empty()) cout << deq.front() << endl;
			else cout << "NONE\n";
		}
		else if(s == "POPFRONT"){
			if(!deq.empty()) deq.pop_front();
		}
		else if(s == "PUSHBACK"){
			int x;
			cin >> x;
			deq.push_back(x);
		}
		else if(s == "PRINTBACK"){
			if(!deq.empty()) cout << deq.back() << endl;
			else cout << "NONE\n";
		}
		else if(s == "POPBACK"){
			if(!deq.empty()) deq.pop_back();
		}
	}
}
