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
		int b[n], a[n];
		for(int i =0; i < n; i++){
			scanf("%d", &a[i]);
			b[i] = a[i];
		}	
		qsort(b, n, sizeof(int), cmpfunc);
		int dem = 0;
		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
				dem++;
				int j = i+1;
				while(j < n){
					if(a[j] == b[i]){
						int temp = a[i]; a[i] = a[j]; a[j] = temp;
						break;
					}
					else j++;
				}
			}
		}
		printf("%d\n", dem);
		
	}
}
