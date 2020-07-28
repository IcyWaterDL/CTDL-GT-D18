#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		queue <int> q;
		while(n--){
			int x;
			cin >> x;
			switch(x){
				case 1:
					cout << q.size() << endl;
					break;
				case 2:
					if(!q.empty()) cout << "NO" << endl;
					else cout << "YES" << endl;
					break;
				case 3:
					int a;
					cin >> a;
					q.push(a);
					break;
				case 4:
					if(!q.empty()) q.pop();
					break;
				case 5:
					if(!q.empty()) cout << q.front() << endl;
					else cout << "-1" << endl;
					break;
				case 6:
					if(!q.empty()) cout << q.back() << endl;
					else cout << "-1" << endl;
					break;
			}
		}
	}
}
