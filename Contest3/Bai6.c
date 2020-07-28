#include"stdio.h"
#include"stdlib.h"
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, ok = 1;
		scanf("%d", &n);
		int a[100], b[100];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			b[i] = a[i];
		}
		qsort(b, n, sizeof(int), cmpfunc);
		for(int i = 0; i < n; i++){
			if(a[i] != b[i] && a[i] != b[n-i-1]){
				ok = 0;
				break;
			}
		}
		if(ok) printf("Yes\n");
		else printf("No\n");
	}
}
