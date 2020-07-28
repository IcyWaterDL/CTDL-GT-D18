#include"stdio.h"
int search_binary(int a[], int k, int l, int r);
main(){
	int test, n, k, a[100001];
	scanf("%d", &test);
	while(test--){
		scanf("%d%d", &n, &k);
		for(int j = 1; j <= n; j++)
			scanf("%d", &a[j]);
		if(search_binary(a, k, 1, n) == -1) printf("NO");
		else printf("%d", search_binary(a, k, 1, n));
		printf("\n");
	}
}
int search_binary(int a[], int k, int l, int r){
	if(l>r) return -1;
	else{
		int mid = (l+r)/2;
		if(k == a[mid]) return mid;
		else{
			if(k<a[mid]) 
				return search_binary(a, k, l, mid-1);
			else return search_binary(a, k, mid+1, r);
		}
	}
}
