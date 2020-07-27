#include"stdio.h"
void init();
void sort();
void Try(int i);
void solve();
int a[100], b[100], k, n, sum, dem, sl=0;
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		dem = 0;
		init();
		sort();
		Try(1);
		if(dem == 0) printf("-1");
		printf("\n");
	}
}
void init(){
	scanf("%d%d", &n, &k);
	for(int j = 1; j <= n; j++)
		scanf("%d", &a[j]);
}
void sort(){
	int temp;
	for (int j = 1; j <= n; j++)       
      	for (int k = 1; k <= n-j; k++)  
           if (a[k] > a[k+1]){
           		temp = a[k]; a[k] = a[k+1]; a[k+1] = temp;
		   } 
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(i == n){
			sum = 0;
			sl = 0;
			for(int j = 1; j <= n; j++)
				if(b[j] == 0) {
					sum += a[j];
					sl = j;
				}
			if(sum == k){
				dem = 1;
				printf("[");
				for(int j = 1; j <= sl; j++)
					if(b[j] == 0){
						if(j < sl) printf("%d ", a[j]);
						else printf("%d", a[j]);
					}
				printf("]"); printf(" ");	 
			}
		}
		else Try(i+1);
	}
}
