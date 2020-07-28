#include"stdio.h"
#include"stdlib.h"
int cmpfunc (const void * a, const void * b){
   return (*(int*)a - *(int*)b);
}
main(){
	int test, n;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);	
		int count = n;
		qsort(a, n, sizeof(int), cmpfunc);
		for(int y = n/2-1, x = n-1; y >= 0 && x >= n/2;){
			if(a[x] >= 2*a[y]){
				count--;
				x--;
				y--;
			}
			else y--;
		}
		printf("%d\n", count);
	}
}
