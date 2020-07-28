#include"stdio.h"
#include"stdlib.h"
#define max 1000000007
long long power(int n, long long k);
main(){
	int test, n;
	long long k;
	scanf("%d", &test);
	while(test--){
		scanf("%d%ld", &n, &k);
		printf("%ld", power(n, k));
		printf("\n");
	}
}
long long  power(int n, long long k){
	if(k == 0) return 1;
	long long x = power(n, k/2);
	if(k%2 == 0) return x%max*x%max;
	return x%max*x%max*n%max;
}
