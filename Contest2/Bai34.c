#include"stdio.h"
#define true 1
#define false 0
void init();
void Try(int i);
int x[10], a[10][10], cot[100], xuoi[100], nguoc[100], max, sum;
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		max = 0; sum = 0;
		init();
		Try(1);
		printf("%d\n", max);
	}
}
void init(){
	for(int i = 1; i <= 8; i++)
		for(int j = 1; j <= 8; j++)
			scanf("%d", &a[i][j]);
			
	for(int j = 1; j <= 8; j++)
		cot[j] = true;
	for(int j = 1; j < 16; j++){
		xuoi[j] = true;
		nguoc[j] = true;
	}
}
void Try(int i){
	for(int j = 1; j <= 8; j++)
		if(cot[j] && xuoi[i-j+8] && nguoc[i+j-1]){
			x[i] = j;
			cot[j] = false; xuoi[i-j+8] = false; nguoc[i+j-1] = false;
			if(i == 8){
				for(int k = 1; k <= 8; k++)
					sum += a[k][x[k]];
				if(max < sum) max = sum;
				sum = 0;
			}
			else Try(i+1);
			cot[j] = true; xuoi[i-j+8] = true; nguoc[i+j-1] = true;
		}
}
