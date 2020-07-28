#include"stdio.h"
#define max 1000000007
void multiply(long long x[20][20], long long y[20][20]);
void power1(long long a[20][20], long long k);
long long a[20][20], b[20][20];
int n;
long long k;
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		scanf("%d%lld", &n, &k);
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++){
				scanf("%lld", &a[i][j]);
				b[i][j] = a[i][j];
			}
		power1(a,k);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				printf("%lld ", a[i][j]);
			printf("\n");
		}
	}
}
void multiply(long long x[20][20], long long y[20][20]){
	long long temp[20][20];
 	for (int i = 0; i < n; i++){
      	for (int j = 0; j < n; j++){
         	long long sum = 0;
         	for (int t = 0; t < n; t++)
            	sum += (x[i][t] * y[t][j]) % max;
            temp[i][j] = sum % max;
      	}
   	}
   	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			a[i][j] = temp[i][j];	
}
void power1(long long a[20][20], long long k){
	if(k == 0 || k == 1) return;
	power1(a, k/2);
	multiply(a, a);
	if(k % 2 == 1) multiply(a, b);
}
