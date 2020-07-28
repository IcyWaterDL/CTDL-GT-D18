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
		int r = 0, s = n-1;
		while(r <= s){
			if(r < s)
				printf("%d %d ", a[s], a[r]);
			else
				printf("%d ", a[s]);
			r++; s--;
		}
		printf("\n");
	}
}
