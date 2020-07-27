#include"stdio.h"
void init();
void Try(int hang, int cot);
int a[100][100], kq[1000], m, n, dem;
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		dem=0;
		init();
		Try(0,0);
		printf("%d\n", dem);
	}
}
void init(){
	scanf("%d%d", &m, &n);
	for(int j = 0; j < m; j++)
		for(int k = 0; k < n; k++)
			scanf("%d", &a[j][k]);
}
void Try(int hang, int cot){
	if(hang == m-1 && cot == n-1) dem++;
	if(hang < m) Try(hang+1, cot);
	if(cot < n) Try(hang, cot+1);
}
