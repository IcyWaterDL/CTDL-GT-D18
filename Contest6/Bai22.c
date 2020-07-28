#include"stdio.h"
int binarySearch(int arr[], int l, int r, int x){
  	if (r >= l){
		int mid = l + (r - l) / 2; 
    	if (arr[mid] == x)
      		return mid;
 		if (arr[mid] > x)
      		return binarySearch(arr, l, mid - 1, x);
    	return binarySearch(arr, mid + 1, r, x);
  	}
  	return -1;
}
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, k;
		scanf("%d%d", &n, &k);
		int a[n];
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		if(binarySearch(a, 0, n-1, k) > 0)
			printf("1\n");
		else printf("-1\n");
	}
}
