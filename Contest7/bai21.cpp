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
		for(int i = 0; i < n; i++){
			v.push_back(a[i]);
		}
		for(int i = 0; i < n; i++){
			int j = i+1;
			while(v[j] <= a[i] && j < n) j++;
			if(j == n) cout << "-1 ";
			else{
				int k = j+1;
				while(v[k] >= v[j] && k < n) k++;
				if(k == n) cout << "-1 ";
				else cout << v[k] << ' ';
			}
		}
		cout << "\n";
	}
}
