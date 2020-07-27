#include"stdio.h"
#include"math.h"
void init();
int Try(int i);
int a[100], b[100], sum1, sum, n, dem;
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		dem = 0;
		sum = 0;
		sum1 = 0;
		init();
		if(sum % 2 == 1) printf("NO");
		else{
			Try(1);
			if(dem) printf("YES");
			else printf("NO");
		}
		printf("\n");
	}
}
void init(){
	scanf("%d", &n);
	for(int j = 1; j <= n; j++){
		scanf("%d", &a[j]);
		sum += a[j];
	}
}
int Try(int i){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(i == n){
			for(int j = 1; j <= n; j++){
				if(b[j]) sum1 += a[j];
			}
			if(sum1 == sum/2){
				dem = 1;
				return dem;
			}
			else sum1 = 0;
		}
		else Try(i+1);
	}
	return 0;
}
