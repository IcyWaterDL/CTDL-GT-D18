#include"stdio.h"
#define max 10000000
int checkTang(long long a[], int n);
int checkGiam(long long a[], int n);
long long dc(long long a[], int n);
main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		scanf("%d", &n);
		long long a[n];
		for(int i = 0; i < n; i++)
			scanf("%lld", &a[i]);
		
	}
}
int checkTang(long long a[], int n){
	for(int i = 0; i < n-1; i++)
		if(a[i] >= a[i+1]) return 0;
	return 1;
}
int checkGiam(long long a[], int n){
	for(int i = 0; i < n-1; i++)
		if(a[i] < a[i+1]) return 0;
	return 1;
}
long long dc(long long a[], int n){
	if(checkTang(a, n) == 1) return 0;
	if(checkGiam(a, n) == 1) return n*(n-1)/2;
	
}
