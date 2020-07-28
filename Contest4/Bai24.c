#include"stdio.h"
#include"stdlib.h"
#define max 123456789
long long power(int n, long long k);
main(){
	int test;
	long long n;
	scanf("%d", &test);
	while(test--){
		scanf("%lld", &n);
		printf("%lld", power(2, n-1));
		printf("\n");
	}
}
long long  power(int n, long long k){
	if(k == 0) return 1;
	long long x = power(n, k/2);
	if(k%2 == 0) return x%max*x%max;
	return x%max*x%max*n%max;
}
