#include"stdio.h"
#define true 1
#define false 0
void init();
void Try(int sum, int dem);
int k, n, a[100], chuaxet[100], s, kt;
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		kt = false;
		init();
		if(s % k != 0) printf("0");
		else{
			Try(0,0);
			if(kt == true) printf("1");
			else printf("0");
		} 
		printf("\n");
	}
}
void init(){
	scanf("%d%d", &n, &k);
	for(int j = 1; j <= n; j++){
		scanf("%d", &a[j]);
		chuaxet[j] = true;
		s += a[j];
	}
}
void Try(int sum, int dem){
	if(kt == true) return;
	if(dem == k){
		kt = true;
		return;
	}
	for(int j = 1; j <= n; j++){
		if(chuaxet[j] == true){
			chuaxet[j] = false;
			if(sum == s/k){
				Try(0, dem+1); 
				return;
			}
			if(sum > s) return;
			else Try(sum + a[j], dem);
		}
		chuaxet[j] = true;
	}
}
