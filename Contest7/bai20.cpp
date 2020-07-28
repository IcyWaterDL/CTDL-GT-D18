#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		vector <int> v;
		for(int i = n-1; i >= 0; i--){
			v.push_back(a[i]);
		}
		for(int i = 0; i < n; i++){
			int j = v.size()-1;
			while(v[j] <= a[i]){
				j--;
			}
			v.pop_back();
			if(j >= 0) cout << v[j] << ' ';
			else cout << "-1 ";
		}
		cout << "\n";
	}
}
