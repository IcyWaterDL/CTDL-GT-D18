#include"stdio.h"
#include"stdlib.h"
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		long long a[n], b[n];
		for(int i = 0; i < n; i++)
			scanf("%lld", &a[i]);
		for(int i = 0; i < n; i++)
				scanf("%lld", &b[i]);
		qsort(a, n, sizeof(long long), cmpfunc);
		qsort(b, n, sizeof(long long), cmpfunc);
		long long sum = 0;
		for(int i = 0, j = n-1; i < n, j >= 0; i++, j--)
			sum += a[i] * b[j];
		printf("%lld\n", sum);
	}
}
