#include"stdio.h"
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		long long a[n], b[n-1];
		for(int i = 0; i < n; i++)
			scanf("%lld", &a[i]);
		for(int i = 0; i < n-1; i++)
			scanf("%lld", &b[i]);
		long long s = n-1;
		for(int i = 0; i < n-1; i++){
			if(a[i] != b[i]){
				s = i;
				break;
			}
		}	
		printf("%lld\n", s+1);
	}
}
