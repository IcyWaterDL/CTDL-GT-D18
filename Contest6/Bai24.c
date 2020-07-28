#include"stdio.h"
//int binarySearch(int arr[], int l, int r, int x){
//  	if (r >= l){
//		int mid = l + (r - l) / 2; 
//    	if (arr[mid] == x)
//      		return mid+1;
// 		if (arr[mid] > x)
//      		return binarySearch(arr, l, mid - 1, x);
//    	return binarySearch(arr, mid + 1, r, x);
//  	}
//  	return -1;
//}
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, k;
		scanf("%d%d", &n, &k);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			if(a[i] == k){
				printf("%d\n", i+1);
				break;
			}
		}	
		//printf("%d\n", binarySearch(a, 0, n-1, k));
	}
}
