#include"stdio.h"
#define max 1000000007
long long power(long long n, long long k);
main(){
	int test;
	long long n;
	scanf("%d", &test);
	while(test--){
		scanf("%lld", &n);
		long long k = 0, m = n;
		while(m){
			k = 10*k+m%10;
			m /= 10;
		}
		printf("%lld\n", power(n, k));
	}
}
long long power(long long n, long long k){
	if(k == 0) return 1;
	long long x = power(n, k/2);
	if(k%2 == 0) return x%max*x%max;
	return x%max*x%max*n%max;
}
