#include"stdio.h"
#include"stdlib.h"
void init();
void Try(int i,int sum);
void sapxeptang();
int a[100], b[100], n, k, count, pt;
main(){
	int test, sum;
	scanf("%d", &test);
	while(test--){
		count = 0; pt=0;
		init();
		Try(1, 0);
		if(count == 0) printf("-1");
		printf("\n");
	}
}
void init(){
	scanf("%d%d", &n, &k);
	for(int j = 1; j <= n; j++)
		scanf("%d", &a[j]);
	sapxeptang();
}
void sapxeptang(){
 	for(int i = 1; i < n; i++)
  		for(int j = i+1;j <= n; j++){
    		if(a[i] > a[j]){
       			int temp=a[i]; 
				a[i]=a[j];
       			a[j]=temp;
     		}
       	}  
}
void Try(int i, int sum){
	if(sum == k){
		count++;
		printf("[");
		for(int j = 1; j < pt; j++)
			printf("%d ", b[j]);
		printf("%d", b[pt]); printf("] ");
	}
	for(int j = i; j <= n; j++){
		if(sum + a[j] <= k){
			pt++;
			b[pt] = a[j];
			Try(j, sum + a[j]);
			pt--;
		} 
	}
}
