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
		int a[n];
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		qsort(a, n, sizeof(int), cmpfunc);
		int f = 0, min2;
		for(int i = 1; i < n; i++){
			if(a[i] > a[0]){
				min2 = a[i];
				f = 1;
				break;
			}
		}
		if(f == 0) printf("-1\n");
		else printf("%d %d\n", a[0], min2);
	}
}
