#include"stdio.h"
main(){
	int test, n, a[100];
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		int max = a[0];
		int flag = 0;
		for(int i = 0; i < n; i++){
			if(a[i] > 0) flag = 1;
			if(max<a[i]) max = a[i];
		}
		int sum = 0, res = a[0];
		for(int i = 0; i < n; i++){
			if(sum + a[i] < 0){
				sum = 0;
				continue;
			}
			sum += a[i];
			if(sum > res) res = sum;
		}
		printf("%d\n", res);
	}
}
