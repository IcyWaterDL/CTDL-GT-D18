#include"stdio.h"
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		int a[n-1];
		for(int i = 0; i < n-1; i++)
			scanf("%d", &a[i]);
		for(int i = 0; i < n-2; i++){
			if(a[i+1] - a[i] > 1) printf("%d\n", a[i]+1);
		}
	}
}
