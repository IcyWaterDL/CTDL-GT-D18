#include"stdio.h"
#define true 1
#define false 0
void init();
void Try(int hang, int cot, int pt);
int a[20][20], chuaxet[20][20], n, dem;
char kq[100];
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		dem = 0;
		init();
		if(a[n-1][n-1] == 0 || a[0][0] == 0) printf("-1");
		else{
			Try(0,0,0);
			if(dem == 0) printf("-1");
		}
		printf("\n");
	}
	return 0;
}
void init(){  
	for(int j = 0; j < n; j++)
		for(int k = 0; k < n; k++){
			scanf("%d", &a[j][k]);
			chuaxet[j][k] = true;
		}
}
void Try(int hang, int cot,int pt){
	if(hang == n-1 && cot == n-1){
		dem++;
		for( int j = 0; j < pt; j++)
			printf("%c", kq[j]);
		printf(" ");
	}
	if(a[hang+1][cot] == 1 && hang < n-1 && chuaxet[hang+1][cot] == true){
		kq[pt] = 'D';
		chuaxet[hang][cot] = false;
		Try(hang+1,cot, pt+1);
		chuaxet[hang][cot] = true;
	}
	if(a[hang][cot-1] == 1 && cot > 0 && chuaxet[hang][cot-1] == true){
		kq[pt] = 'L';
		chuaxet[hang][cot] = false;
		Try(hang, cot-1, pt+1);
		chuaxet[hang][cot] = true;
	}
	if(a[hang][cot+1] == 1 && cot < n-1 && chuaxet[hang][cot+1] == true){
		kq[pt] = 'R';
		chuaxet[hang][cot] = false;
		Try(hang, cot+1, pt +1);
		chuaxet[hang][cot] = true;
	}
	if(a[hang-1][cot] == 1 && hang > 0 && chuaxet[hang-1][cot] == true){
		kq[pt] = 'U';
		chuaxet[hang][cot] = false;
		Try(hang-1, cot, pt+1);
		chuaxet[hang][cot] = true;
	}
}
