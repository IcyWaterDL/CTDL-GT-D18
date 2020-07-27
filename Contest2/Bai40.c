#include"stdio.h"
#define true 1
#define false 0
void init();
void Try(int i);
int n, min, sum[20], c[20][20], chuaxet[30], p[30];
main(){
	init();
	Try(2);
	printf("%d", min);
}
void init(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			scanf("%d", &c[i][j]);
	for(int j = 2; j <= n; j++)
		chuaxet[j] = true;
	p[1] = 1; 
	sum[1] = 0;
	min = 100000;
}
void Try(int i){
	for(int j = 2; j <= n; j++){
		if(chuaxet[j] == true){
			p[i] = j;
			chuaxet[j] = false;
			sum[i] = sum[i-1] + c[p[i-1]][j];
			if(sum[i] < min){
				if(i == n)
					if(min > sum[n] + c[p[n]][1]) 
						min = sum[n] + c[p[n]][1];
				else{
					Try(i+1);
					chuaxet[j] = true;
				}
			}
		}
	}
}
