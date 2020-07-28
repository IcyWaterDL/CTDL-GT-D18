#include"stdio.h"
#include"stdlib.h"
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
int count(int x, int Y[], int dem[], int m){
	if(x == 0) return 0;
	if(x == 1) return dem[0];
	int i = m-1, ans = 0;
	while(Y[i] > x){// tim so luong so trong Y lon hon x
		ans++;
		i--;
	}
	ans += dem[0] + dem[1];
	if(x == 2) ans -= (dem[3] + dem[4]);
	if(x == 3) ans += dem[2];
	return ans; 
}
int pair(int X[], int n, int Y[], int m){
	int dem[5] = {0};
	for(int i = 0; i < m; i++)
		if(Y[i] < 5) dem[Y[i]]++;
	qsort(Y, m, sizeof(int), cmpfunc);
	int tong = 0;
	for(int i = 0; i < n; i++){
		tong += count(X[i], Y, dem, m);
	}
	return tong;
}
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, m;
		scanf("%d%d", &n, &m);
		int X[n], Y[m];
		for(int i = 0; i < n; i++) scanf("%d", &X[i]);
		for(int i = 0; i < m; i++) scanf("%d", &Y[i]);
		printf("%d\n", pair(X, n, Y, m));
	}
}
