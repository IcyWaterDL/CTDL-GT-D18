#include"stdio.h"
#include"math.h"
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		int min = a[0]+a[1];
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(abs(a[i] + a[j]) < abs(min)) min = a[i] + a[j];
			}
		}
		printf("%d\n", min);
	}
}
