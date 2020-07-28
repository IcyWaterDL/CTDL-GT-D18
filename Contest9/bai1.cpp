// A simple representation of graph using STL 
#include<bits/stdc++.h> 
using namespace std; 
vector < vector <int> > a (1000000);
int m,n,i,j,u,v;
main(){
	int t;
	cin >> t;
	while(t--){
		/*Input data*/
		cin >> n >> m;
		for (i=1;i<=m;i++) {
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		/*Sort canh ke*/
		for (i=1;i<=m;i++)
			sort(a[i].begin(),a[i].end());
		/*Print Result*/
		for (i=1;i<=n;i++) {
			cout << i << ": ";
			for (j=0;j<a[i].size();j++) cout << a[i][j] << " ";
			cout << endl;
		}
	}
	
	//system("pause");
}
