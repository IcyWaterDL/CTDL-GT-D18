#include"stdio.h"
void init();
void Try(int hang, int cot, int pt);
int a[10][10], n, dem;
char kq[20];
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		dem = 0;
		scanf("%d", &n);
		init();
		if(a[n-1][n-1] == 0 || a[0][0] == 0) printf("-1");
		else{
			Try(0,0, 0);
			if(dem == 0) printf("-1");
		}
		printf("\n");
	}
}
void init(){
	for(int j = 0; j < n; j++)
		for(int k = 0; k < n; k++)
			scanf("%d", &a[j][k]);
}
void Try(int hang, int cot, int pt){
	if(hang == n-1 && cot == n-1){
		dem++;
		for( int j = 0; j < pt; j++)
			printf("%c", kq[j]);
		printf(" ");
	}
	if(a[hang+1][cot] == 1 && hang < n-1){
		kq[pt] = 'D';
		Try(hang+1,cot, pt+1); 
	}
	if(a[hang][cot+1] == 1 && cot < n-1){
		kq[pt] = 'R';
		Try(hang, cot+1, pt +1);
	}
}
