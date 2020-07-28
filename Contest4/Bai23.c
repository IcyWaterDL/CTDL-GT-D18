#include"stdio.h"
long long n, k;
long long dq(long long l, long long r, long long num);
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		long long len = 1, num = 1;
		scanf("%lld%lld", &n, &k);
		for(int i = 1; i < n; i++){
			len = len*2+1;
			num++;
		}
		printf("%lld", dq(1, len, num));
		printf("\n");
	}
}
long long dq(long long l, long long r, long long num){
	if(l == r) return 1;
	long long mid = (l+r) / 2;
	if(k == mid) return num;
	if(k > mid) return dq(mid+1, r,num-1);
	return dq(l, mid-1, num-1); 
}
