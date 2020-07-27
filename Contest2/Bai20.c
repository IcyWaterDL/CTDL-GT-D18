#include"stdio.h"
void init();
void result();
void Try(int b[], int i);
int n, a[100];
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		init();
		Try(a,n);
		printf("\n");
	}
}
void init(){
	for(int j = 1; j <= n; j++)
		scanf("%d", &a[j]);
}
void result(int b[], int i){
	printf("[");
	for(int j = 1; j <= i; j++){
		if(j==i) printf("%d", b[j]);
		else printf("%d ", b[j]);
	}
	printf("]");	
}
void Try(int a[], int i){
	if(i){
		int b[100];
		for(int j = 1; j < i; j++)
			b[j] = a[j] + a[j+1];
		Try(b, --n);
		result(a,i);
	}	
}	
