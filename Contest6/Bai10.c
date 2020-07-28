#include"stdio.h"
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		int du[10] = {0};
		for(int i = 0; i < n; i++){
			long long a;
			scanf("%d", &a);
			while(a != 0){
				du[a%10] = 1;
				a /= 10;
			}
		}
		for(int i = 0; i < 10; i++){
			if(du[i]) printf("%d ", i);
		}
		printf("\n");
	}
}
