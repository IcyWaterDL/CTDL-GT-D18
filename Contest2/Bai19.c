#include"stdio.h"
void init();
void result();
void Try(int i);
int n, a[100];
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		init();
		Try(n);
	}
}
void init(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
}
void result(){
	printf("[");
	for(int j = 1; j <= n; j++){
		if(j==n) printf("%d", a[j]);
		else printf("%d ", a[j]);
	}
	printf("]");
	printf("\n");
}
void Try(int i){
	if(i){
		result();
		for(int j = 1; j < i; j++)
			a[j] += a[j+1];
		Try(--n);
	}	
}
