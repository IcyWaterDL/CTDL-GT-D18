#include"stdio.h"
#include"stdlib.h"
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, x;
		scanf("%d%d", &n, &x);
		int a[n], dem = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if(a[i] == x) dem++;
		}
		if(dem == 0) printf("-1\n");
		else printf("%d\n", dem);
	}
}
