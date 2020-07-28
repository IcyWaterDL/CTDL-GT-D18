#include"stdio.h"
#include"stdlib.h"
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, k;
		scanf("%d%d", &n, &k);
		int a[n];
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		int dem = 0;
		for(int i = 0; i < n-1; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] + a[j] == k) dem++;
			}
		}
		printf("%d\n", dem);
	}
}
