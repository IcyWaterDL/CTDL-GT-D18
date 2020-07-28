#include"stdio.h"
#include"stdlib.h"
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, k, t[50];
		long long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
		scanf("%d%d", &n, &k);
		for(int i = 0; i < n; i++){
			scanf("%d", &t[i]);
		}
		qsort(t, n, sizeof(int), cmpfunc);
		for(int i = 0; i < n; i++){
			if(i < k){
				a1 += t[i]; a2 += t[n-1-i];
			}
			else{
				b1 += t[i]; b2 += t[n-1-i];
			}
		}
		long long max = 0;
		if(b1-a1 > a2-b2) max = b1-a1;
		else max = a2-b2;
		printf("%lld\n", max);
	}
}
