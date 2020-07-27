#include"stdio.h"
#define true 1
#define false 0
void init();
void Try(int i);
int cot[100], xuoi[100], nguoc[100], n, dem;
main(){
	dem = 0;
	scanf("%d", &n);
	init();
	Try(1);
	printf("%d\n", dem);
}
void init(){
	for(int j = 1; j <= n; j++)
		cot[j] = true;
	for(int j = 1; j < 2*n; j++){
		xuoi[j] = true;
		nguoc[j] = true;
	}
}
void Try(int i){
	for(int j = 1; j <= n; j++)
		if(cot[j] && xuoi[i-j+n] && nguoc[i+j-1]){
			cot[j] = false; xuoi[i-j+n] = false; nguoc[i+j-1] = false;
			if(i == n) dem++;
			else Try(i+1);
			cot[j] = true; xuoi[i-j+n] = true; nguoc[i+j-1] = true;
		}
}
