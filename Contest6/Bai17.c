#include"stdio.h"
void merge(long long a[], long long l, long long m, long long r){
	long long n1 = m - l +1, n2 = r-m;
	long long L[n1], R[n2]; 
    for (long long i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for (long long j = 0; j < n2; j++) 
        R[j] = a[m + 1+ j];
    long long i = 0, j = 0, k = l;
    while( i < n1 && j < n2){
    	if(L[i] <= R[j]){
    		a[k] = L[i];
    		i++;
		}
		else{
			a[k] = R[j];
			j++;
		}
		k++;
	}
	while(i < n1){
		a[k] = L[i];
		i++; k++;
	}
	while(j < n2){
		a[k] = R[j];
		j++; k++;
	}
}
void mergeSort(long long a[], long long l, long long r){ 
    if (l < r) { 
        int m = l+(r-l)/2;  
        mergeSort(a, l, m); 
        mergeSort(a, m+1, r); 
  		merge(a, l, m, r); 
    } 
} 
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		long long n, m;
		scanf("%lld%lld", &n, &m);
		long long a[n], b[m];
		for(long long i = 0; i < n; i++)
			scanf("%lld", &a[i]);
		for(long long i = 0; i < m; i++)
			scanf("%lld", &b[i]);
		mergeSort(a, 0, n-1);
		mergeSort(b, 0, m-1);
		printf("%lld\n", a[n-1]*b[0]);
	}
}
