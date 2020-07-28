#include"stdio.h"

main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int vt = -1;
		long long x, n, s = 0;
		scanf("%lld%lld", &n, &x);
		long long a[n];
		for(int i = 0; i < n; i++){
			scanf("%lld", &a[i]);
			if(a[i] <= x){
				if(a[i] > s){
					s = a[i];
					vt = i;
				}
			}
		}
		if(vt == -1) printf("-1\n");
		else printf("%lld\n", vt+1);
	}
}
