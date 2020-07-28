#include"stdio.h"
char dq(long long n, long long i);
long long f[100];
main(){
	int test;
	long long n, i;
	scanf("%d", &test);
	f[1] = 1; f[2] = 1;
	for(int j = 3; j < 93; j++)
		f[j] = f[j-2]+f[j-1];
	while(test--){
		scanf("%lld%lld", &n, &i);
		printf("%c", dq(n, i));
		printf("\n");	
	}
}
char dq(long long n, long long i){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(i > f[n-2]) return dq(n-1, i-f[n-2]);
	return dq(n-2, i);
}
