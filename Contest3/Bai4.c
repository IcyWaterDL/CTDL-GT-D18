#include"stdio.h"
#include"stdlib.h"
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
main(){
	int test, n, t[20];
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
			scanf("%d", &t[i]);
		qsort(t, n, sizeof(int), cmpfunc);
		long long a=0, b=0;
		for(int i = 0; i < n; i++){
			if(i % 2 == 0) a = 10*a+t[i];
			else b = 10*b+t[i];
		}
		printf("%lld\n", a+b);
	}
}
