#include"stdio.h"
#include"math.h"
int isPrime(int n){
	if(n < 2) return 0;
	if(n == 2 || n == 3) return 1;
	for(int i = 2; i*i <= n; i++){
		if(n%i == 0) return 0;
	}
	return 1;
}
main(){
	int test; 
	scanf("%d", &test);
	while(test--){
		long long n;
		scanf("%lld", &n);
		int flag = 0; long long val;
		for(long long i = 2; i < n; i++){
			if( isPrime(i) && isPrime(n-i)){
				flag = 1;
				printf("%lld %lld\n", i, n-i);
				break;
			}
		}
		if(flag == 0) printf("-1\n");
	}
}
