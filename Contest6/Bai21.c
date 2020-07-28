#include"stdio.h"
#include"stdlib.h"
typedef struct arr{
	int val, count;
}mang;
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		mang a[n]; 
		int d[10000]={0};
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i].val);
			d[a[i].val]++;
		}
		for(int i = 0; i < n; i++){
			a[i].count = d[a[i].val];
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n-i-1; j++){
				if(a[j].count < a[j+1].count){
					int t1 = a[j].val, t2 = a[j].count;
					a[j].val = a[j+1].val; a[j].count = a[j+1].count;
					a[j+1].val = t1; a[j+1].count = t2;
				}
				else if(a[j].count == a[j+1].count && a[j].val > a[j+1].val){
					int t1 = a[j].val, t2 = a[j].count;
					a[j].val = a[j+1].val; a[j].count = a[j+1].count;
					a[j+1].val = t1; a[j+1].count = t2;
				}
			}
		}
		for(int i = 0; i < n; i++){
			printf("%d ", a[i].val);
		}
		printf("\n");
	}
}
