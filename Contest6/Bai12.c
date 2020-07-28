#include"stdio.h"
#include"stdlib.h"
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, k;
		scanf("%d%d", &n, &k);
		int a[n];
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		qsort(a, n, sizeof(int), cmpfunc);
		for(int i = n-1; i >= n-k; i--)
			printf("%d ", a[i]);
		printf("\n");
	}
}
