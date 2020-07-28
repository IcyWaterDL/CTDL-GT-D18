#include"stdio.h"
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		int a[n], dem = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if(a[i] == 0) dem++;
		}
		printf("%d\n", dem);
	}
}
