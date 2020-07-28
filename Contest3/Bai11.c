#include"stdio.h"
#include"stdlib.h"
#define max 1000000007
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	qsort(a, n, sizeof(int), cmpfunc);
	long long sum = 0;
	while(n > 1){
		a[0] = a[0] + a[1];
		n--;
		for(int i = 1; i < n; i++)
			a[i]= a[i+1];
		sum += a[0]%max;
		qsort(a, n, sizeof(int), cmpfunc);
	}
	printf("%lld\n", sum);
}
