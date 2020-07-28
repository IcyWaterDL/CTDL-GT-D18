#include"stdio.h"
#include"stdlib.h"
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n+m];
		for(int i = 0; i < n+m; i++)
			scanf("%d", &a[i]);
		qsort(a, n+m, sizeof(int), cmpfunc);
		printf("%d ", a[0]);
		for(int i = 1; i < n+m; i++)
			if(a[i] != a[i-1]) printf("%d ", a[i]);
		printf("\n");
		for(int i = 1; i < n+m; i++)
			if(a[i] == a[i-1]) printf("%d ", a[i]);
		printf("\n");
	}
}
