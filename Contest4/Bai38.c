#include"stdio.h"
#include"stdlib.h"
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int m, n, k;
		scanf("%d%d%d", &m, &n, &k);
		int a[m], b[n], c[m+n];
		for(int i = 0; i < m+n; i++)
			scanf("%d", &c[i]);
		qsort(c, m+n, sizeof(int), cmpfunc);
		printf("%d\n", c[k-1]);	
	}
}
