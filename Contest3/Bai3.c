#include"stdio.h"
#include"stdlib.h"
#define max 1000000007
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
main(){
	int test;
	long long n;
	scanf("%d", &test);
	while(test--){
		scanf("%lld", &n);
		int a[n]; long long s = 0;
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]); 
		qsort(a, n, sizeof(int), cmpfunc);
		for(int i = 0; i < n; i++){
			s += a[i]*i;
			s %= max;
		} 
		printf("%lld\n", s);
	}
}
