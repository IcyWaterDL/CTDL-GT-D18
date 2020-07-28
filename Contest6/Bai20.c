#include"stdio.h"
#include"stdlib.h"
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
int t, n;
int binarySearch(int arr[], int l, int r, int x){
  	if (r >= l){
		int mid = l + (r - l) / 2; 
    	if(arr[mid] < arr[t]+x){
            if(mid == n-1||arr[mid+1] >= arr[t]+x) return mid;
            return binarySearch(arr,mid+1,r, x);
        }
		else return binarySearch(arr, l, mid-1, x);
  	}
  	return -1;
}

main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int k;
		scanf("%d%d", &n, &k);
		int a[n];
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		qsort(a, n, sizeof(int), cmpfunc);
		long long dem = 0;
		for(t = 0; t < n; t++){
				long long temp = binarySearch(a, t+1, n-1, k);
			if(temp>0) dem += temp - t;	
		}
		printf("%lld\n", dem);
	}
}

