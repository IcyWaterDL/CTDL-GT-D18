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
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			b[i] = a[i];
		}
		qsort(b, n, sizeof(int), cmpfunc);
		int i = 0, j = n-1;
		while(a[i] == b[i]) i++;
		while(a[j] == b[j]) j--;
		printf("%d %d\n", i+1, j+1);
	}
}
